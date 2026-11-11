
void FUN_004c8a00(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_128;
  long local_120;
  long lStack_118;
  long local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  local_90 = 0;
  local_88 = -0x8000000000000000;
  FUN_0043d3a0(auStack_80);
  local_70 = param_2;
  FUN_004c9a40(&local_90,param_2);
  puVar3 = PTR_DAT_048607b8;
  lVar12 = (long)*(int *)(param_2 + 0x30);
  if (0 < *(int *)(param_2 + 0x30)) {
    do {
      lVar9 = *(long *)(param_2 + 0x28);
      lVar12 = lVar12 + -1;
      switch(*(undefined1 *)(lVar9 + lVar12 * 0x10)) {
      case 1:
        puVar11 = *(undefined8 **)(lVar9 + lVar12 * 0x10 + 8);
        if ((puVar11 != (undefined8 *)0x0) && (0 < *(int *)(param_1 + 5))) {
          lVar9 = 0;
          do {
            FUN_004297c0(&local_120,**(undefined8 **)(param_1[4] + lVar9 * 8));
            uVar5 = FUN_00429cb0(puVar11,&local_120);
            if ((uVar5 & 1) != 0) {
              FUN_004225d0(&local_120,&DAT_04084559);
              FUN_00423880(&local_120,*puVar11,*(int *)(puVar11 + 1) - (int)*puVar11);
              lVar10 = param_1[3];
              FUN_0043bce0(&local_128,local_120,0xffffffff);
              uVar8 = *(uint *)(lVar10 + 0x80);
              if (uVar8 == (*(uint *)(lVar10 + 0x84) & 0x3fffffff)) {
                FUN_00426990(puVar3,lVar10 + 0x78,8);
                uVar8 = *(uint *)(lVar10 + 0x80);
              }
              *(undefined8 *)(*(long *)(lVar10 + 0x78) + (long)(int)uVar8 * 8) = local_128;
              local_128 = 0;
              *(uint *)(lVar10 + 0x80) = uVar8 + 1;
              FUN_0043be10(&local_128);
              **(ulong **)(param_1[4] + lVar9 * 8) =
                   *(ulong *)(*(long *)(param_1[3] + 0x78) + (long)*(int *)(param_1[3] + 0x80) * 8 +
                             -8) & 0xfffffffffffffffe;
              FUN_00422550(&local_120);
              break;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_1 + 5));
        }
        break;
      case 2:
        puVar11 = *(undefined8 **)(lVar9 + lVar12 * 0x10 + 8);
        if (puVar11 == (undefined8 *)0x0) break;
        uVar1 = *(undefined4 *)(puVar11 + 2);
        uVar2 = *(undefined4 *)(puVar11 + 5);
LAB_004c8e10:
        FUN_004c8580(param_1,puVar11,uVar1,puVar11 + 3,uVar2,0,0,&local_90);
        goto joined_r0x004c8d4c;
      case 3:
        puVar11 = *(undefined8 **)(lVar9 + lVar12 * 0x10 + 8);
        if ((puVar11 != (undefined8 *)0x0) && (0 < *(int *)(param_1 + 5))) {
          lVar9 = 0;
          do {
            FUN_004297c0(&local_120,**(undefined8 **)(param_1[4] + lVar9 * 8));
            uVar5 = FUN_00429cb0(puVar11 + 2,&local_120);
            if ((uVar5 & 1) != 0) {
              uVar6 = FUN_004adce0(*puVar11,*(int *)(puVar11 + 1) - (int)*puVar11);
              **(undefined8 **)(param_1[4] + lVar9 * 8) = uVar6;
              goto joined_r0x004c8d4c;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(param_1 + 5));
        }
        break;
      case 8:
        plVar7 = *(long **)(lVar9 + lVar12 * 0x10 + 8);
        if ((plVar7 != (long *)0x0) && (*plVar7 != plVar7[1])) {
          local_120 = *plVar7;
          lStack_118 = plVar7[1];
          iVar4 = FUN_004c8350(&local_90,&local_120);
          if (-1 < iVar4) {
            lVar9 = param_1[3];
            uVar8 = *(uint *)(lVar9 + 0xe0);
            if (uVar8 == (*(uint *)(lVar9 + 0xe4) & 0x3fffffff)) {
              FUN_00426990(puVar3,lVar9 + 0xd8,0x20);
              uVar8 = *(uint *)(lVar9 + 0xe0);
            }
            *(uint *)(lVar9 + 0xe0) = uVar8 + 1;
            puVar11 = (undefined8 *)(*(long *)(lVar9 + 0xd8) + (long)(int)uVar8 * 0x20);
            *puVar11 = 0;
            FUN_0043bf00(puVar11,local_120,lStack_118);
            *(int *)(puVar11 + 1) = iVar4;
            puVar11[2] = param_1;
            puVar11[3] = 0;
            goto joined_r0x004c8d4c;
          }
        }
        break;
      case 0xb:
        lVar9 = *(long *)(lVar9 + lVar12 * 0x10 + 8);
        if (lVar9 != 0) {
          FUN_004c87d0(param_1,lVar9,*(undefined8 *)(lVar9 + 0x10));
          goto joined_r0x004c8d4c;
        }
        break;
      case 0xc:
        puVar11 = *(undefined8 **)(lVar9 + lVar12 * 0x10 + 8);
        if (puVar11 != (undefined8 *)0x0) {
          if (0 < *(int *)(param_1 + 5)) {
            lVar9 = 0;
            do {
              FUN_004297c0(&local_120,**(undefined8 **)(param_1[4] + lVar9 * 8));
              uVar5 = FUN_00429cb0(puVar11,&local_120);
              if ((uVar5 & 1) != 0) {
                FUN_004225d0(&local_120,&DAT_04084559);
                FUN_00423880(&local_120,*puVar11,*(int *)(puVar11 + 1) - (int)*puVar11);
                lVar10 = param_1[3];
                FUN_0043bce0(&local_128,local_120,0xffffffff);
                uVar8 = *(uint *)(lVar10 + 0x80);
                if (uVar8 == (*(uint *)(lVar10 + 0x84) & 0x3fffffff)) {
                  FUN_00426990(puVar3,lVar10 + 0x78,8);
                  uVar8 = *(uint *)(lVar10 + 0x80);
                }
                *(undefined8 *)(*(long *)(lVar10 + 0x78) + (long)(int)uVar8 * 8) = local_128;
                local_128 = 0;
                *(uint *)(lVar10 + 0x80) = uVar8 + 1;
                FUN_0043be10(&local_128);
                **(ulong **)(param_1[4] + lVar9 * 8) =
                     *(ulong *)(*(long *)(param_1[3] + 0x78) + (long)*(int *)(param_1[3] + 0x80) * 8
                               + -8) & 0xfffffffffffffffe;
                FUN_00422550(&local_120);
                break;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < *(int *)(param_1 + 5));
          }
          uVar1 = *(undefined4 *)(puVar11 + 2);
          uVar2 = *(undefined4 *)(puVar11 + 5);
          goto LAB_004c8e10;
        }
      }
joined_r0x004c8d4c:
    } while (0 < lVar12);
  }
  if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
    lVar12 = 0x80000000;
  }
  else {
    lVar12 = (long)*(int *)(param_2 + 0x24);
  }
  plVar7 = (long *)FUN_00426d40(*param_1,0x10);
  *plVar7 = lVar12;
  FUN_0043d280(auStack_80);
  if (0 < (int)local_88) {
    lVar12 = local_90 + (long)(int)local_88 * 0x10;
    iVar4 = (int)local_88;
    do {
      lVar12 = lVar12 + -0x10;
      FUN_0043be10(lVar12);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar12 = local_88;
  uVar8 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_90 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_90,0x10,uVar8 & 0x3fffffff);
  }
  return;
}

