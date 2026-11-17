
/* WARNING: Removing unreachable block (ram,0x02ce03b0) */
/* WARNING: Removing unreachable block (ram,0x02ce0294) */
/* WARNING: Removing unreachable block (ram,0x02ce0330) */
/* WARNING: Removing unreachable block (ram,0x02ce02e4) */
/* WARNING: Removing unreachable block (ram,0x02ce03fc) */

void FUN_02cdff48(long param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint local_44;
  
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined2 *)(param_1 + 0x80) = uVar5;
  *(undefined1 *)(param_1 + 0x82) = uVar3;
  *(undefined1 *)(param_1 + 0x83) = uVar4;
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined2 *)(param_1 + 0x88) = uVar5;
  *(undefined1 *)(param_1 + 0x8a) = uVar3;
  *(undefined1 *)(param_1 + 0x8b) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(undefined2 *)(param_1 + 0x90) = uVar5;
  *(undefined1 *)(param_1 + 0x92) = uVar3;
  *(undefined1 *)(param_1 + 0x93) = uVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  *(undefined2 *)(param_1 + 0x98) = uVar5;
  *(undefined1 *)(param_1 + 0x9a) = uVar3;
  *(undefined1 *)(param_1 + 0x9b) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar8;
  *(undefined2 *)(param_1 + 0xa0) = uVar5;
  *(undefined1 *)(param_1 + 0xa2) = uVar3;
  *(undefined1 *)(param_1 + 0xa3) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar8;
  *(undefined2 *)(param_1 + 0xa8) = uVar5;
  *(undefined1 *)(param_1 + 0xaa) = uVar3;
  *(undefined1 *)(param_1 + 0xab) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = uVar8;
  *(undefined2 *)(param_1 + 0xb0) = uVar5;
  *(undefined1 *)(param_1 + 0xb2) = uVar3;
  *(undefined1 *)(param_1 + 0xb3) = uVar4;
  *(undefined4 *)(param_1 + 0xb4) = uVar8;
  *(undefined2 *)(param_1 + 0xb8) = uVar5;
  *(undefined1 *)(param_1 + 0xba) = uVar3;
  *(undefined1 *)(param_1 + 0xbb) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar8;
  *(undefined2 *)(param_1 + 0xc0) = uVar5;
  *(undefined1 *)(param_1 + 0xc2) = uVar3;
  *(undefined1 *)(param_1 + 0xc3) = uVar4;
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  *(undefined2 *)(param_1 + 200) = uVar5;
  *(undefined1 *)(param_1 + 0xca) = uVar3;
  *(undefined1 *)(param_1 + 0xcb) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  puVar6 = PTR_DAT_04bb43c0;
  if (param_2 == 0x1e) {
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(param_1 + 0x10);
    lVar9 = *(long *)puVar6;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar10 = 1;
        *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_1 + 0x12);
        *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_1 + 0x13);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x14);
        goto LAB_02ce039c;
      }
    }
    lVar10 = 0;
LAB_02ce039c:
    iVar11 = (int)lVar10;
    uVar7 = FUN_0277d6c4(param_1 + 0x18);
    if (*(long *)puVar6 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        puVar1 = (undefined2 *)(param_1 + 0x80) + lVar10 * 4;
        iVar11 = iVar11 + 1;
        *puVar1 = *(undefined2 *)(param_1 + 0x18);
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 0x1a);
        *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)(param_1 + 0x1b);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x1c);
      }
    }
    *(int *)(param_1 + 0xd0) = iVar11;
    return;
  }
  if (param_2 == 3) {
    local_44 = 9;
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(param_1 + 0x50);
    uVar8 = 0;
    if (*(long *)puVar6 == 0) goto LAB_02ce051c;
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar7) goto LAB_02ce0430;
    if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      uVar8 = 0;
      goto LAB_02ce051c;
    }
LAB_02ce04a8:
    puVar1 = (undefined2 *)(param_1 + 8) + (ulong)local_44 * 4;
    if (9 < local_44) {
      puVar1 = (undefined2 *)(param_1 + 8);
    }
    *(undefined2 *)(param_1 + 0x80) = *puVar1;
    *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)((long)puVar1 + 3);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(puVar1 + 2);
  }
  else {
    if (param_2 != 0) {
      if (param_2 - 0x1dU < 8) {
        local_44 = *(uint *)(&DAT_04058560 + (long)(int)(param_2 - 0x1dU) * 4);
      }
      else {
        local_44 = 0xffffffff;
      }
      if (local_44 == 0xffffffff) {
        return;
      }
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      lVar9 = param_1 + 8 + (ulong)local_44 * 8;
      if (9 < local_44) {
        lVar9 = param_1 + 8;
      }
      uVar7 = FUN_0277d6c4(lVar9);
      if (*(long *)puVar6 == 0) {
        return;
      }
      lVar9 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (*(uint *)(lVar9 + 0x1d8) <= uVar7) {
        return;
      }
      if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
        return;
      }
      goto LAB_02ce04a8;
    }
    uVar7 = *(uint *)(param_1 + 0x58);
    if (uVar7 == 0xffffffff) {
LAB_02ce0430:
      uVar8 = 0;
      goto LAB_02ce051c;
    }
    puVar1 = (undefined2 *)(param_1 + 8);
    puVar2 = puVar1 + (ulong)uVar7 * 4;
    if (9 < uVar7) {
      puVar2 = puVar1;
    }
    *(undefined2 *)(param_1 + 0x80) = *puVar2;
    *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)((long)puVar2 + 3);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(puVar2 + 2);
    uVar7 = *(uint *)(param_1 + 0x5c);
    if (uVar7 != 0xffffffff) {
      puVar2 = puVar1 + (ulong)uVar7 * 4;
      if (9 < uVar7) {
        puVar2 = puVar1;
      }
      *(undefined2 *)(param_1 + 0x88) = *puVar2;
      *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)((long)puVar2 + 3);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(puVar2 + 2);
      uVar7 = *(uint *)(param_1 + 0x60);
      if (uVar7 == 0xffffffff) {
        uVar8 = 2;
      }
      else {
        puVar2 = puVar1 + (ulong)uVar7 * 4;
        if (9 < uVar7) {
          puVar2 = puVar1;
        }
        *(undefined2 *)(param_1 + 0x90) = *puVar2;
        *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)((long)puVar2 + 3);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(puVar2 + 2);
        uVar7 = *(uint *)(param_1 + 100);
        if (uVar7 == 0xffffffff) {
          uVar8 = 3;
        }
        else {
          puVar2 = puVar1 + (ulong)uVar7 * 4;
          if (9 < uVar7) {
            puVar2 = puVar1;
          }
          *(undefined2 *)(param_1 + 0x98) = *puVar2;
          *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(puVar2 + 1);
          *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)((long)puVar2 + 3);
          *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(puVar2 + 2);
          uVar7 = *(uint *)(param_1 + 0x68);
          if (uVar7 == 0xffffffff) {
            uVar8 = 4;
          }
          else {
            puVar2 = puVar1 + (ulong)uVar7 * 4;
            if (9 < uVar7) {
              puVar2 = puVar1;
            }
            *(undefined2 *)(param_1 + 0xa0) = *puVar2;
            *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)(puVar2 + 1);
            *(undefined1 *)(param_1 + 0xa3) = *(undefined1 *)((long)puVar2 + 3);
            *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(puVar2 + 2);
            uVar7 = *(uint *)(param_1 + 0x6c);
            if (uVar7 == 0xffffffff) {
              uVar8 = 5;
            }
            else {
              puVar2 = puVar1 + (ulong)uVar7 * 4;
              if (9 < uVar7) {
                puVar2 = puVar1;
              }
              *(undefined2 *)(param_1 + 0xa8) = *puVar2;
              *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(puVar2 + 1);
              *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((long)puVar2 + 3);
              *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(puVar2 + 2);
              uVar7 = *(uint *)(param_1 + 0x70);
              if (uVar7 == 0xffffffff) {
                uVar8 = 6;
              }
              else {
                puVar2 = puVar1 + (ulong)uVar7 * 4;
                if (9 < uVar7) {
                  puVar2 = puVar1;
                }
                *(undefined2 *)(param_1 + 0xb0) = *puVar2;
                *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(puVar2 + 1);
                *(undefined1 *)(param_1 + 0xb3) = *(undefined1 *)((long)puVar2 + 3);
                *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(puVar2 + 2);
                uVar7 = *(uint *)(param_1 + 0x74);
                if (uVar7 == 0xffffffff) {
                  uVar8 = 7;
                }
                else {
                  puVar2 = puVar1 + (ulong)uVar7 * 4;
                  if (9 < uVar7) {
                    puVar2 = puVar1;
                  }
                  *(undefined2 *)(param_1 + 0xb8) = *puVar2;
                  *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)(puVar2 + 1);
                  *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)((long)puVar2 + 3);
                  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(puVar2 + 2);
                  uVar7 = *(uint *)(param_1 + 0x78);
                  if (uVar7 == 0xffffffff) {
                    uVar8 = 8;
                  }
                  else {
                    puVar2 = puVar1 + (ulong)uVar7 * 4;
                    if (9 < uVar7) {
                      puVar2 = puVar1;
                    }
                    *(undefined2 *)(param_1 + 0xc0) = *puVar2;
                    *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(puVar2 + 1);
                    *(undefined1 *)(param_1 + 0xc3) = *(undefined1 *)((long)puVar2 + 3);
                    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(puVar2 + 2);
                    uVar7 = *(uint *)(param_1 + 0x7c);
                    if (uVar7 == 0xffffffff) {
                      uVar8 = 9;
                    }
                    else {
                      puVar2 = puVar1 + (ulong)uVar7 * 4;
                      if (9 < uVar7) {
                        puVar2 = puVar1;
                      }
                      *(undefined2 *)(param_1 + 200) = *puVar2;
                      *(undefined1 *)(param_1 + 0xca) = *(undefined1 *)(puVar2 + 1);
                      *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)((long)puVar2 + 3);
                      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(puVar2 + 2);
                      uVar8 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_02ce051c;
    }
  }
  uVar8 = 1;
LAB_02ce051c:
  *(undefined4 *)(param_1 + 0xd0) = uVar8;
  return;
}

