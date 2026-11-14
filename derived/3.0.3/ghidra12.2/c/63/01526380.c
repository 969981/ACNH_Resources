
void _INIT_4681(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bbd3e8;
  if ((DAT_0520f058 & 1) == 0) {
    DAT_0520f058 = 1;
    *(undefined ***)(PTR_DAT_04bbd3e8 + 0x10) = &PTR_LAB_049a7300;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined ***)puVar1 = &PTR_LAB_049a72e0;
  }
  return;
}

