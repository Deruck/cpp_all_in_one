#define DISALLOW_COPY_AND_ASSIGN(TypeName)\
TypeName(const TypeName&) = delete;\
TypeName& operator=(const TypeName&) = delete ;

#define DISALLOW_COPY_ASSIGN_MOVE(TypeName)\
TypeName(const TypeName&) = delete ;\
TypeName& operator=(const TypeName&) = delete;\
TypeName(const TypeName&&) noexcept = delete;\
TypeName& operator=(const TypeName&&) noexcept = delete;