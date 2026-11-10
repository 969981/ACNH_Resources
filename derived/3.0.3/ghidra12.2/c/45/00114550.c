
uint FUN_00114550(ushort *param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined1 uVar6;
  
  if ((param_3 & 0xffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    puVar4 = param_2;
    do {
      uVar2 = *param_1;
      uVar6 = (undefined1)uVar2;
      if (uVar2 == 0) {
        return uVar3;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + 1);
      uVar1 = (uint)*(byte *)((long)param_1 + 1) | (uVar2 & 0xff) << 8;
      uVar3 = uVar3 + 1;
      if (uVar1 - 0x3041 < 0x53) {
        uVar5 = uVar1 + 0x60;
        uVar6 = (undefined1)(uVar5 >> 8);
      }
      *(char *)((long)puVar4 + 1) = (char)uVar5;
      param_2 = puVar4 + 1;
      *(undefined1 *)puVar4 = uVar6;
      param_1 = param_1 + 1;
      puVar4 = param_2;
    } while ((uVar3 & 0xffff) < (param_3 & 0xffff));
  }
  *param_2 = 0;
  return uVar3;
}

