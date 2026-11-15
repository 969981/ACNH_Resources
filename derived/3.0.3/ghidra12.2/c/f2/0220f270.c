
void FUN_0220f270(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_14;
  
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = &PTR_LAB_04a77288;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x1e) = 0x101;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  uVar3 = FUN_0220f3c4(param_2,0);
  *(undefined4 *)(param_1 + 1) = uVar3;
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar4 = (uint *)FUN_0079e770(uVar7,&local_14);
  if (puVar4 != (uint *)0x0) {
    uVar5 = *puVar4;
    if (uVar5 == 0 || puVar4 == (uint *)(ulong)uVar5) {
LAB_0220f310:
      uVar5 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar5 = puVar6[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_04dda7e8) &&
               (uVar5 = (uint)*(ushort *)(DAT_04dda7f0 + (long)(int)uVar2 * 2), uVar5 < 8))
            goto LAB_0220f314;
          }
        }
        goto LAB_0220f310;
      }
    }
LAB_0220f314:
    if (uVar5 < 8) {
      uVar3 = *(undefined4 *)(&DAT_04058920 + (long)(int)uVar5 * 4);
      goto LAB_0220f338;
    }
  }
  uVar3 = 1;
LAB_0220f338:
  *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  return;
}

