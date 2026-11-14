
void _INIT_4682(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bbd3f8;
  if ((DAT_0520f090 & 1) == 0) {
    DAT_0520f090 = 1;
    *(undefined ***)(PTR_DAT_04bbd3f8 + 0x10) = &PTR_LAB_049a7348;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined ***)puVar1 = &PTR_LAB_049a7328;
  }
  return;
}

