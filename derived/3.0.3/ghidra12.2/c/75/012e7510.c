
void FUN_012e7510(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *local_50;
  int local_48;
  int local_44;
  
  puVar7 = PTR_DAT_04bb37e0;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    local_44 = *(int *)(param_3 + 0x14);
    local_50 = PTR_DAT_04bb2010 + 0x10;
    iVar1 = *(int *)(param_3 + 0x24) + 1;
    if (iVar1 != local_44) {
      lVar2 = lVar10 + 0x130 + (ulong)*(uint *)(lVar10 + 0x198) * 0x30;
      if (1 < *(uint *)(lVar10 + 0x198)) {
        lVar2 = lVar10 + 0x130;
      }
      local_48 = iVar3;
      do {
        iVar4 = *(int *)(lVar2 + 0x28);
        puVar9 = puVar7;
        if (iVar4 <= local_48 && local_48 <= *(int *)(lVar2 + 8) + iVar4 + -1) {
          iVar5 = *(int *)(lVar2 + 0x2c);
          if (((iVar5 <= local_44) && (local_44 <= *(int *)(lVar2 + 0xc) + iVar5 + -1)) &&
             (uVar6 = (local_44 - iVar5) + (local_48 - iVar4) * *(int *)(lVar2 + 0xc),
             uVar6 < *(uint *)(lVar2 + 0x10))) {
            puVar9 = (undefined *)(*(long *)(lVar2 + 0x18) + (long)(int)uVar6 * 8);
          }
        }
        uVar8 = (**(code **)*param_2)(param_2,puVar9,&local_50);
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (local_48 < *(int *)(param_3 + 0x20)) {
          local_48 = local_48 + 1;
        }
        else {
          local_48 = *(int *)(param_3 + 0x10);
          local_44 = local_44 + 1;
        }
      } while ((iVar3 != local_48) || (iVar1 != local_44));
    }
  }
  return;
}

