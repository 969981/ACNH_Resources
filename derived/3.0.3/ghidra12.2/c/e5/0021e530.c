
void FUN_0021e530(void *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_4c;
  undefined4 local_44;
  
  memset(param_1,0,4);
  memset(param_1,0,4);
  if (1 < *(ushort *)(param_2 + 0xc)) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 & 0xffff;
      uVar6 = (uint)uVar4;
      uVar3 = FUN_0021dde0(param_2,*(undefined8 *)(param_2[10] + uVar4 * 0x30 + 0x10));
      if ((uVar3 & 1) == 0) {
        if (param_2[0x13] == 0) {
          local_4c = 0x800000000000000;
          local_44 = 0;
          (**(code **)(*param_2 + 0x10))(param_2,&local_4c);
          lVar5 = *(long *)(param_2[0x13] + uVar4 * 0x10);
        }
        else {
          lVar5 = *(long *)(param_2[0x13] + uVar4 * 0x10);
        }
        if (lVar5 == 0) {
          uVar2 = FUN_002aaa44(param_2);
          uVar1 = uVar6;
          if ((uVar2 & 0xff) <= uVar6) {
            uVar1 = uVar6 + 1;
          }
          lVar5 = (ulong)(uVar1 >> 5 & 7) * 4;
          *(uint *)((long)param_1 + lVar5) =
               1 << (ulong)(uVar1 & 0x1f) | *(uint *)((long)param_1 + lVar5);
        }
      }
      uVar4 = (ulong)(uVar6 + 1);
    } while ((int)(uVar6 + 1 & 0xffff) < (int)(*(ushort *)(param_2 + 0xc) - 1));
  }
  return;
}

