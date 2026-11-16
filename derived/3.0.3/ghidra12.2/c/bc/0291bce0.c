
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0291bce0(byte *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_50 = 0xfffe;
  FUN_0277d4ac(&local_50);
  local_50 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) + 0x120);
  local_38 = 0;
  local_48 = PTR_DAT_04bb2010 + 0x10;
  uStack_40 = 0x1e0000001e;
  FUN_0253cd3c(&local_68,param_1,&local_48,&local_50,0);
  puVar12 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    plVar13 = &DAT_055c1098;
  }
  else {
    do {
      plVar13 = puVar12 + -8;
      if (*(int *)(puVar12 + -1) == -0x7a57de51) goto LAB_0291bdb0;
      puVar1 = puVar12 + 1;
      puVar12 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
    plVar13 = &DAT_055c1098;
  }
LAB_0291bdb0:
  if (((DAT_04c9acf0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c9acf0), iVar8 != 0)) {
    FUN_00773950(&DAT_04c9ace0);
    __cxa_guard_release(&DAT_04c9acf0);
  }
  if (0 < (int)DAT_04c9ace0) {
    uVar14 = 0;
    do {
      if (*(int *)(DAT_04c9ace8 + uVar14 * 4) == -0xa5a5635) goto LAB_0291be00;
      uVar14 = uVar14 + 1;
    } while (DAT_04c9ace0 != uVar14);
  }
  uVar14 = 0;
LAB_0291be00:
  if ((((DAT_055c9188 & 1) == 0) && (*DAT_055cdb40 == '\0')) &&
     (uVar9 = FUN_02930ce0(&DAT_055c10d0,plVar13,param_1), lVar7 = DAT_05694df8, (uVar9 & 1) != 0))
  {
    DAT_055c1174 = local_68;
    DAT_055c1184 = (undefined4)uVar14;
    DAT_055c1180 = local_58;
    DAT_055c117c = local_60;
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    if (DAT_05694df8 != 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      iVar8 = FUN_006bd550(plVar13[1],0);
      uVar2 = param_2[1];
      if (iVar8 == 0x55b5d9de) {
        uVar2 = 1;
      }
      lVar11 = *(long *)(lVar7 + 8);
      if ((lVar11 != 0) && (*(int *)(lVar7 + 0x10) == 0)) {
        uVar15 = param_2[3];
        uVar16 = param_2[4];
        uVar3 = *param_2;
        uVar4 = param_2[2];
        uVar5 = *(undefined1 *)(param_2 + 5);
        uVar6 = *(undefined1 *)((long)param_2 + 0x15);
        *(undefined4 *)(lVar11 + 0x33c) = uVar2;
        *(undefined4 *)(lVar11 + 0x338) = uVar3;
        *(undefined4 *)(lVar11 + 0x340) = uVar4;
        *(undefined4 *)(lVar11 + 0x348) = uVar16;
        *(undefined1 *)(lVar11 + 0x34c) = uVar5;
        *(undefined1 *)(lVar11 + 0x34d) = uVar6;
        *(undefined4 *)(lVar11 + 0x344) = uVar15;
        return 1;
      }
    }
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

