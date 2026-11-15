
void FUN_021d6190(uint *param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  undefined4 local_24;
  
  local_2d = 0;
  local_38 = 8;
  local_34[0] = 0;
  local_40 = local_34;
  local_48 = PTR_DAT_04bb3768 + 0x10;
  uVar3 = FUN_021d62e0(&local_48,param_2);
  if ((uVar3 & 1) == 0) {
LAB_021d6244:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_48 + 0x18))(&local_48);
  local_24 = FUN_006bd550(local_40,0);
  puVar4 = (uint *)FUN_0079e770(uVar7,&local_24);
  if (puVar4 == (uint *)0x0) goto LAB_021d6244;
  uVar5 = *puVar4;
  if (uVar5 != 0 && puVar4 != (uint *)(ulong)uVar5) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
    uVar5 = 0;
    if (*puVar6 == 0) goto LAB_021d622c;
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
        goto LAB_021d622c;
      }
    }
  }
  uVar5 = 0;
LAB_021d622c:
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

