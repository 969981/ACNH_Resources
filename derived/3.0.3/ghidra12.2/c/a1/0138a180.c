
/* WARNING: Removing unreachable block (ram,0x0138a284) */
/* WARNING: Removing unreachable block (ram,0x0138a2a4) */

void FUN_0138a180(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_96 [6];
  undefined2 local_90;
  undefined2 local_8e;
  byte local_8c;
  long local_88;
  long lStack_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  uint local_64;
  
  lVar7 = *(long *)(param_2 + 0xa8);
  if (lVar7 != 0) {
    iVar4 = *(int *)(param_1 + 0x48);
    iVar5 = *(int *)(param_1 + 0x4c);
    local_88 = param_1 + 0x40;
    lStack_80 = param_1 + 0x50;
    local_78 = PTR_DAT_04bb2018 + 0x10;
    iVar1 = *(int *)(param_1 + 0x5c) + 1;
    if (iVar1 != iVar5) {
      iVar8 = iVar5;
      local_70 = iVar4;
      local_6c = iVar5;
      do {
        iVar6 = local_70;
        if (((*(int *)(lVar7 + 0x18) <= local_70 && local_70 <= *(int *)(lVar7 + 0x28)) &&
            (*(int *)(lVar7 + 0x1c) <= iVar8)) && (iVar8 <= *(int *)(lVar7 + 0x2c))) {
          FUN_01309ec4(auStack_96,lVar7,&local_78);
          local_64 = 1;
          uVar2 = (iVar8 - iVar5) +
                  (iVar8 - iVar5) * (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x48)) +
                  (iVar6 - iVar4);
          uVar3 = uVar2;
          if (*(uint *)(param_1 + 0x80) <= uVar2) {
            uVar3 = 0;
          }
          *(undefined2 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar3 * 6) = local_90;
          uVar3 = uVar2;
          if (*(uint *)(param_1 + 0x80) <= uVar2) {
            uVar3 = 0;
          }
          *(undefined2 *)(*(long *)(param_1 + 0x88) + (long)(int)uVar3 * 6 + 2) = local_8e;
          local_64 = (uint)local_8c;
          if (*(uint *)(param_1 + 0x80) <= uVar2) {
            uVar2 = 0;
          }
          *(byte *)(*(long *)(param_1 + 0x88) + (long)(int)uVar2 * 6 + 4) = local_8c;
        }
        if (iVar6 < *(int *)(param_1 + 0x58)) {
          local_70 = iVar6 + 1;
        }
        else {
          local_70 = *(int *)(param_1 + 0x48);
          iVar8 = iVar8 + 1;
          local_6c = iVar8;
        }
      } while ((iVar4 != local_70) || (iVar1 != iVar8));
    }
  }
  return;
}

