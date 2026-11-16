
/* WARNING: Removing unreachable block (ram,0x026e3590) */
/* WARNING: Removing unreachable block (ram,0x026e3580) */
/* WARNING: Removing unreachable block (ram,0x026e35b0) */

void FUN_026e3530(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bb4948;
  puVar4 = PTR_DAT_04bb27a8;
  puVar3 = PTR_DAT_04bb2010;
  local_58 = CONCAT44(local_58._4_4_,0x32);
  lVar7 = *(long *)PTR_DAT_04bb27a8;
  lVar8 = *(long *)(lVar7 + 0x1c0);
  if (lVar8 == 0) {
    return;
  }
  if (*(long *)(lVar8 + 0xd0) == 0) {
    return;
  }
  local_50 = PTR_DAT_04bb2010 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb4948;
  if ((lVar9 != 0) && (lVar7 != 0)) {
    if ((*(ushort *)(lVar7 + 0x4b68) & 1) == 0) goto LAB_026e3650;
    iVar1 = *(int *)(lVar7 + 0x4b6c);
    iVar2 = *(int *)(lVar7 + 0x4b70);
    piVar6 = (int *)(**(code **)(*(long *)(lVar9 + 0x288) + 0xf0))(lVar9 + 0x288);
    local_48 = CONCAT44(piVar6[1] + iVar2 * 0x20,*piVar6 + iVar1 * 0x20);
    local_58 = 0xfd1;
    FUN_0277d4ac(&local_58);
    if (*(long *)(lVar8 + 0xd0) != 0) {
      FUN_012e5290(*(long *)(lVar8 + 0xd0),&local_58,&local_50);
    }
    lVar9 = *(long *)puVar5;
  }
  if (lVar9 == 0) {
    return;
  }
LAB_026e3650:
  local_48 = 0;
  local_50 = puVar3 + 0x10;
  lVar7 = *(long *)puVar4;
  if ((lVar7 != 0) && ((*(ushort *)(lVar7 + 0x4b68) & 1) != 0)) {
    iVar1 = *(int *)(lVar7 + 0x4b6c);
    iVar2 = *(int *)(lVar7 + 0x4b70);
    piVar6 = (int *)(**(code **)(*(long *)(lVar9 + 0x250) + 0xf0))(lVar9 + 0x250);
    local_48 = CONCAT44(piVar6[1] + iVar2 * 0x20,*piVar6 + iVar1 * 0x20);
    local_58 = 0xfd3;
    FUN_0277d4ac(&local_58);
    if (*(long *)(lVar8 + 0xd0) != 0) {
      FUN_012e5290(*(long *)(lVar8 + 0xd0),&local_58,&local_50);
    }
  }
  return;
}

