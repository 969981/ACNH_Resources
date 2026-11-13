
void FUN_01201740(undefined2 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 1 & 1) != 0) && ((*puVar1 >> 0x1a & 1) != 0)) {
      uVar3 = 0xed0f;
      goto LAB_0120180c;
    }
  }
  uVar2 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar2 = uVar2 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar2 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  uVar3 = (undefined2)
          *(undefined4 *)(&DAT_0417473c + ((ulong)uVar2 + (ulong)uVar2 * 2 >> 0x1e & 0xc));
  DAT_0514cb64 = uVar2;
LAB_0120180c:
  *param_1 = uVar3;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_0277d4ac();
  return;
}

