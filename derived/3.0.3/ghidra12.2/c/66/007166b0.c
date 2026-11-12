
void FUN_007166b0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  byte local_80 [4];
  byte local_7c [4];
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar5 = PTR_DAT_04bb3338;
  puVar4 = PTR_DAT_04bb3330;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar11 = (long)*(int *)(param_1 + 0xbc);
    plVar9 = (long *)(*(long *)(param_1 + 0xb0) - lVar11);
    puVar1 = PTR_DAT_04bb3040 + 0x10;
    do {
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)puVar4 = puVar1;
        __cxa_guard_release(puVar5);
      }
      if ((plVar9 != (long *)0x0) &&
         (uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar4), (uVar7 & 1) != 0))
      goto LAB_0071677c;
      plVar9 = (long *)(*(long *)((long)plVar9 + lVar11 + 8) - lVar11);
    } while (plVar9 != (long *)((param_1 + 0xa8) - lVar11));
  }
  plVar9 = (long *)0x0;
LAB_0071677c:
  puVar4 = PTR_DAT_04bb2020;
  switch(*param_2) {
  case 0:
    pcStack_70 = &DAT_040aaca2;
    break;
  case 1:
    pcStack_70 = &DAT_04091044;
    break;
  case 2:
    pcStack_70 = &DAT_0408bd73;
    break;
  case 3:
    pcStack_70 = &DAT_040a57d8;
    break;
  case 4:
    pcStack_70 = &DAT_040d956c;
    break;
  case 5:
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = &DAT_04080bbd;
    FUN_0078a1a0(plVar9,param_1 + 0x2a0,&local_78,PTR_DAT_04bb2150,param_3);
    puVar5 = PTR_DAT_04bb39b0;
    lVar11 = *(long *)PTR_DAT_04bb39b0;
    pbVar8 = PTR_DAT_04bb32e0;
    if (lVar11 == 0) {
LAB_007168e8:
      if (*pbVar8 < 8) goto LAB_00716960;
LAB_007168f4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00716958:
        pbVar8 = PTR_DAT_04bb5038;
        goto LAB_00716960;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar11 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar8 = (byte *)(lVar11 + 0x471);
        }
      }
      local_7c[0] = *pbVar8;
      if (7 < local_7c[0]) goto LAB_00716958;
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar8 = (byte *)(lVar11 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_007168e8;
        }
        goto LAB_007168f4;
      }
LAB_00716960:
      local_7c[0] = *pbVar8;
      if (7 < local_7c[0]) {
        local_7c[0] = 0xff;
      }
    }
    uVar7 = FUN_02669430(local_7c);
    if ((uVar7 & 1) == 0) {
      return;
    }
    local_78 = puVar4 + 0x10;
    pcStack_70 = "PE_FireworksFes_Selfmade";
    lVar11 = *(long *)puVar5;
    pbVar8 = PTR_DAT_04bb32e0;
    if (lVar11 == 0) {
LAB_007169e8:
      if (*pbVar8 < 8) goto LAB_00716a60;
LAB_007169f4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00716a58:
        pbVar8 = PTR_DAT_04bb5038;
        goto LAB_00716a60;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar11 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar8 = (byte *)(lVar11 + 0x471);
        }
      }
      local_80[0] = *pbVar8;
      if (7 < local_80[0]) goto LAB_00716a58;
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar8 = (byte *)(lVar11 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_007169e8;
        }
        goto LAB_007169f4;
      }
LAB_00716a60:
      local_80[0] = *pbVar8;
      if (7 < local_80[0]) {
        local_80[0] = 0xff;
      }
    }
    uVar10 = *(undefined8 *)PTR_DAT_04bb49a0;
    local_64 = FUN_006bd550("PE_FireworksFes_Selfmade",0);
    uVar10 = FUN_01b5b4b0(uVar10,&local_64);
    FUN_01b5c860(&local_78,uVar10,local_80,0,0);
  default:
    goto switchD_0071679c_default;
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  FUN_0078a1a0(plVar9,param_1 + 0x2a0,&local_78,PTR_DAT_04bb2150,0);
switchD_0071679c_default:
  return;
}

