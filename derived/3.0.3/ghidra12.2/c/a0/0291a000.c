
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0291a000(byte *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined2 local_18 [2];
  undefined4 local_14;
  
  local_18[0] = 0;
  local_14 = 0x3411ee5c;
  local_48 = &local_14;
  local_50 = &PTR_LAB_04aa4c40;
  local_40 = local_18;
  FUN_02acd4a0(&local_50);
  uVar1 = local_18[0];
  local_48 = (undefined4 *)((ulong)local_48 & 0xffffffff);
  uVar3 = FUN_02b62ab0(&local_50,local_18[0]);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    *(undefined2 *)(*(long *)PTR_DAT_04bb5008 + 0x25ab0) = uVar1;
    puVar8 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      puVar6 = &DAT_055c1098;
    }
    else {
      do {
        puVar6 = puVar8 + -8;
        if (*(int *)(puVar8 + -1) == 0x6622bd46) goto LAB_0291a0dc;
        puVar6 = puVar8 + 1;
        puVar8 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != &DAT_055c1b58);
      puVar6 = &DAT_055c1098;
    }
LAB_0291a0dc:
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar2 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990,puVar6);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar3 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar3 * 4) == 0x3c150efd) goto LAB_0291a12c;
        uVar3 = uVar3 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar3);
    }
    uVar3 = 0;
LAB_0291a12c:
    if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') &&
       (uVar5 = FUN_02930ce0(&DAT_055c10d0,puVar6,param_1), (uVar5 & 1) != 0)) {
      DAT_055c1174 = local_50;
      DAT_055c1184 = (undefined4)uVar3;
      DAT_055c1180 = local_48._4_4_;
      DAT_055c117c = (undefined4)local_48;
      DAT_055c1188 = *param_1;
      _DAT_055c1198 = 0;
      DAT_055c119a = 0;
      DAT_055c116c = 0;
      if (7 < DAT_055c1188) {
        DAT_055c1188 = 0xff;
      }
      lVar9 = *(long *)PTR_DAT_04bb2808;
      if (((lVar9 != 0) && (lVar7 = *(long *)(lVar9 + 8), lVar7 != 0)) &&
         (*(int *)(lVar9 + 0x10) == 0)) {
        *(undefined4 *)(lVar7 + 0x338) = *param_2;
        *(undefined4 *)(lVar7 + 0x33c) = param_2[1];
        *(undefined4 *)(lVar7 + 0x340) = param_2[2];
        *(undefined4 *)(lVar7 + 0x344) = param_2[3];
        *(undefined4 *)(lVar7 + 0x348) = param_2[4];
        *(undefined1 *)(lVar7 + 0x34c) = *(undefined1 *)(param_2 + 5);
        *(undefined1 *)(lVar7 + 0x34d) = *(undefined1 *)((long)param_2 + 0x15);
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

