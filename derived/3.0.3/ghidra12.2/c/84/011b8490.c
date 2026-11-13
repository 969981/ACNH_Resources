
/* WARNING: Removing unreachable block (ram,0x011b859c) */
/* WARNING: Removing unreachable block (ram,0x011b8580) */
/* WARNING: Removing unreachable block (ram,0x011b8578) */
/* WARNING: Removing unreachable block (ram,0x011b85f8) */
/* WARNING: Removing unreachable block (ram,0x011b861c) */
/* WARNING: Removing unreachable block (ram,0x011b8570) */
/* WARNING: Removing unreachable block (ram,0x011b8600) */
/* WARNING: Removing unreachable block (ram,0x011b85f0) */

void FUN_011b8490(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_70;
  int local_68;
  int local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  byte local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  local_60 = PTR_DAT_04bbfe68 + 0x10;
  local_58 = 1;
  uStack_54 = DAT_0516b10c;
  local_50 = FUN_017baf44();
  puVar4 = PTR_DAT_04bb5c90;
  puVar2 = PTR_DAT_04bb27a8;
  local_50 = local_50 & 1;
  lVar7 = *(long *)PTR_DAT_04bb5c90;
  iVar3 = *(int *)(lVar7 + 0x28);
  local_64 = *(int *)(lVar7 + 0x2c);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(lVar7 + 0x3c) + 1;
  local_68 = iVar3;
  if (iVar1 != local_64) {
    do {
      uVar5 = FUN_01a4f798(&local_60,1,&local_70);
      if ((uVar5 & 1) != 0) {
        local_48 = 1;
        local_44 = 1;
        lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x38) + 0xe0);
        if (lVar6 != 0) {
          FUN_012e5af4(lVar6,&local_70);
        }
      }
      uVar5 = FUN_01a4f798(&local_60,0,&local_70);
      if ((uVar5 & 1) != 0) {
        local_48 = 1;
        local_44 = 0;
        lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0x38) + 0xd0);
        if (lVar6 != 0) {
          FUN_012e5af4(lVar6,&local_70);
        }
      }
      if (local_68 < *(int *)(lVar7 + 0x38)) {
        local_68 = local_68 + 1;
      }
      else {
        local_64 = local_64 + 1;
        local_68 = *(int *)(lVar7 + 0x28);
      }
    } while ((iVar3 != local_68) || (iVar1 != local_64));
    lVar7 = *(long *)puVar4;
  }
  lVar6 = lVar7;
  if (0 < *(int *)(lVar7 + 0x50)) {
    lVar6 = 0;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x58) + lVar6 * 8);
      lVar6 = lVar6 + 1;
      puVar8[1] = puVar2;
      *puVar8 = *(undefined8 *)(lVar7 + 0x60);
      *(undefined8 **)(lVar7 + 0x60) = puVar8;
    } while (lVar6 < *(int *)(lVar7 + 0x50));
    lVar6 = *(long *)puVar4;
  }
  *(undefined4 *)(lVar7 + 0x50) = 0;
  FUN_011b78a0(lVar6 + 0x920);
  return;
}

