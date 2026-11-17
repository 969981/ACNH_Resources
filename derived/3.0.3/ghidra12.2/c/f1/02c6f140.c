
void FUN_02c6f140(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  undefined **local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  undefined2 local_64;
  undefined8 local_62;
  undefined4 local_58;
  undefined8 local_54;
  byte local_4c;
  undefined4 local_44;
  
  if (*(long *)(param_1 + 0x210) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x210) + 0x5b8);
  if (lVar7 == 0) {
    return;
  }
  local_58 = 0;
  local_62 = 0x101000001;
  iVar2 = *(int *)(param_1 + 0x22598);
  local_54 = 0x60000000c;
  local_44 = *(undefined4 *)(param_1 + 0x1c764);
  local_64 = 0;
  local_6c = 0;
  local_78 = &PTR_LAB_04b2b020;
  local_4c = *(byte *)(param_1 + 0x1f8);
  if (7 < local_4c) {
    local_4c = 0xff;
  }
  switch(local_44) {
  case 0:
    lVar9 = param_1 + 0x1c1c8;
    break;
  case 1:
    lVar9 = param_1 + 0x1c2e0;
    break;
  case 2:
    lVar9 = param_1 + 0x1c3f8;
    break;
  case 3:
    lVar9 = param_1 + 0x1c510;
    break;
  default:
    uVar6 = 0;
    goto LAB_02c6f230;
  }
  uVar6 = *(undefined4 *)(lVar9 + 0x30);
LAB_02c6f230:
  local_70 = iVar2;
  piVar4 = (int *)FUN_02c6946c(param_1,local_44,uVar6);
  lVar9 = 4;
  piVar1 = piVar4 + 1;
  if (*(char *)(param_1 + 0x97da4) != '\0') {
    lVar9 = 0xc;
    piVar1 = piVar4 + 3;
  }
  if ((*(short *)((long)piVar4 + lVar9) != -2) && (iVar2 != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x225a0);
    uVar10 = 0;
    lVar9 = (long)iVar2 << 3;
    do {
      if (*(short *)*puVar8 != -2) {
        uVar5 = FUN_0277d7b4((short *)*puVar8,piVar1);
        if ((uVar5 & 1) != 0) {
          if (-1 < (int)uVar10) {
            local_6c = uVar10;
            local_68 = uVar10;
            if (-1 < *piVar4) {
              iVar2 = *(int *)(lVar7 + 0x2e8);
              iVar3 = 0;
              if (iVar2 != 0) {
                iVar3 = (int)uVar10 / iVar2;
              }
              local_6c = iVar3 * iVar2 - iVar2 * *piVar4;
              local_6c = local_6c & ((int)local_6c >> 0x1f ^ 0xffffffffU);
            }
            goto LAB_02c6f2e4;
          }
          break;
        }
        uVar10 = uVar10 + 1;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  local_68 = 0;
  local_6c = 0;
LAB_02c6f2e4:
  local_54 = CONCAT44(3,(undefined4)local_54);
  FUN_03864290(lVar7,&local_78);
  return;
}

