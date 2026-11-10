
void FUN_00347f8c(long param_1,long param_2)

{
  byte bVar1;
  
  (**(code **)PTR_DAT_04bbd920)(*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_04bbd928)
            (*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x20),
             *(undefined4 *)(param_2 + 0x24),*(undefined8 *)(param_1 + 0xb0));
  (**(code **)PTR_DAT_04bcf1c0)(*(undefined8 *)(param_1 + 0xb0),param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x2d);
  if ((bVar1 & 1) != 0) {
    (**(code **)PTR_DAT_04bcf1c8)(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_2 + 0x1c));
    bVar1 = *(byte *)(param_2 + 0x2d);
  }
  (*DAT_04c62a90)(*(undefined8 *)(param_1 + 0xb0),(bVar1 >> 1 ^ 0xff) & 1);
  (**(code **)PTR_DAT_04bcf1d8)
            (*(undefined8 *)(param_1 + 0xb0),(*(byte *)(param_2 + 0x2d) >> 2 ^ 0xff) & 1);
  if ((*(byte *)(param_1 + 1) >> 1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00348084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbdd10)(*(undefined8 *)(param_1 + 0xb0),*(byte *)(param_2 + 0x2d) >> 3 & 1);
  return;
}

