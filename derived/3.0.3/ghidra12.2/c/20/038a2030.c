
/* WARNING: Removing unreachable block (ram,0x038a293c) */
/* WARNING: Removing unreachable block (ram,0x038a2754) */
/* WARNING: Removing unreachable block (ram,0x038a20e8) */
/* WARNING: Removing unreachable block (ram,0x038a246c) */
/* WARNING: Removing unreachable block (ram,0x038a2294) */
/* WARNING: Removing unreachable block (ram,0x038a209c) */
/* WARNING: Removing unreachable block (ram,0x038a220c) */
/* WARNING: Removing unreachable block (ram,0x038a20c4) */
/* WARNING: Removing unreachable block (ram,0x038a24f4) */
/* WARNING: Removing unreachable block (ram,0x038a26d0) */
/* WARNING: Removing unreachable block (ram,0x038a210c) */
/* WARNING: Removing unreachable block (ram,0x038a29c4) */

void FUN_038a2030(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_80 [4];
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  
  local_70 = 0;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)local_80);
  puVar3 = PTR_DAT_04bcb7d8;
  lVar9 = *(long *)(param_1 + 0x10);
  local_80[0] = 0;
  lVar14 = *(long *)PTR_DAT_04bc1510;
  uVar15 = *(ulong *)(param_1 + 0x18);
  if (uVar15 != 0) {
    for (; lVar10 = *(long *)(uVar15 + 8), lVar10 != 0; uVar15 = *(ulong *)(uVar15 + 8)) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar15;
    }
    lVar10 = lVar14 + 0x10;
LAB_038a2170:
    do {
      uVar1 = *(uint *)(uVar15 + 0x20);
      if (*(char *)(lVar14 + 0x38) == '\0') {
        iVar5 = *(int *)(uVar15 + 0x24);
        puVar6 = (undefined8 *)FUN_002aad70(lVar10,0x68);
        FUN_002bc398();
        iVar5 = FUN_002aadf0(lVar10,puVar6,iVar5 + 100U & 0xffff | 0x68000000);
        if (iVar5 == *(int *)PTR_DAT_04bcb8c8) {
          (**(code **)*puVar6)(puVar6);
          FUN_002aad48(lVar10,puVar6);
        }
      }
      else {
        iVar5 = 0;
      }
      lVar12 = *(long *)(*(long *)puVar3 + 0x70);
      for (lVar11 = *(long *)(lVar12 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar2 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar2;
            if (uVar2 != 0xffffffff) {
              if (0xf < uVar2) {
                uVar13 = 0;
              }
              *(int *)(lVar9 + uVar13 * 4) = iVar5;
              lVar12 = *(long *)(*(long *)puVar3 + 0x70);
            }
            goto LAB_038a2274;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a2274;
        }
      }
LAB_038a2274:
      local_80[0] = 0;
      for (lVar11 = *(long *)(lVar12 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar1 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar1;
            if (uVar1 == 0xffffffff) goto LAB_038a22f4;
            if (0xf < uVar1) {
              uVar13 = 0;
            }
            uVar8 = *(undefined4 *)(lVar9 + uVar13 * 4);
            goto LAB_038a22f8;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a22f4;
        }
      }
LAB_038a22f4:
      uVar8 = 0;
LAB_038a22f8:
      uVar7 = FUN_002ab090(*(long *)PTR_DAT_04bc1510 + 0x10,uVar8,0x68);
      FUN_002bc8e0(local_80,uVar7,*(undefined2 *)(uVar15 + 0x28));
      FUN_00229780(&local_70,local_80);
      if (local_70 != 0) {
        FUN_00223064(&local_70);
      }
      lVar11 = *(long *)(uVar15 + 0x10);
      if (lVar11 != 0) {
        *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
        uVar15 = *(ulong *)(uVar15 + 0x10);
        lVar11 = *(long *)(uVar15 + 8);
        while (lVar11 != 0) {
          *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
          uVar15 = *(ulong *)(uVar15 + 8);
          lVar11 = *(long *)(uVar15 + 8);
        }
        goto LAB_038a2170;
      }
      uVar13 = uVar15;
      do {
        uVar15 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffe;
        if (uVar15 == 0) goto LAB_038a20ac;
        bVar4 = *(ulong *)(uVar15 + 8) != uVar13;
        uVar13 = uVar15;
      } while (bVar4);
    } while( true );
  }
LAB_038a20ac:
  local_80[0] = 1;
  uVar15 = *(ulong *)(param_1 + 0x3b8);
  if (uVar15 != 0) {
    for (; lVar10 = *(long *)(uVar15 + 8), lVar10 != 0; uVar15 = *(ulong *)(uVar15 + 8)) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar15;
    }
    lVar10 = lVar14 + 0x10;
LAB_038a23d0:
    do {
      uVar1 = *(uint *)(uVar15 + 0x20);
      if (*(char *)(lVar14 + 0x38) == '\0') {
        iVar5 = *(int *)(uVar15 + 0x24);
        puVar6 = (undefined8 *)FUN_002aad70(lVar10,0x70);
        FUN_002ac93c();
        iVar5 = FUN_002aadf0(lVar10,puVar6,iVar5 + 100U & 0xffff | 0x7c000000);
        if (iVar5 == *(int *)PTR_DAT_04bcb8c8) {
          (**(code **)*puVar6)(puVar6);
          FUN_002aad48(lVar10,puVar6);
        }
      }
      else {
        iVar5 = 0;
      }
      lVar12 = *(long *)(*(long *)puVar3 + 0x70);
      for (lVar11 = *(long *)(lVar12 + 0x3b8); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar2 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar2;
            if (uVar2 != 0xffffffff) {
              if (0xf < uVar2) {
                uVar13 = 0;
              }
              *(int *)(lVar9 + 0x40 + uVar13 * 4) = iVar5;
              lVar12 = *(long *)(*(long *)puVar3 + 0x70);
            }
            goto LAB_038a24d4;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a24d4;
        }
      }
LAB_038a24d4:
      local_80[0] = 1;
      for (lVar11 = *(long *)(lVar12 + 0x3b8); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar1 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar1;
            if (uVar1 == 0xffffffff) goto LAB_038a2554;
            if (0xf < uVar1) {
              uVar13 = 0;
            }
            uVar8 = *(undefined4 *)(lVar9 + 0x40 + uVar13 * 4);
            goto LAB_038a2558;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a2554;
        }
      }
LAB_038a2554:
      uVar8 = 0;
LAB_038a2558:
      uVar7 = FUN_002ab090(*(long *)PTR_DAT_04bc1510 + 0x10,uVar8,0x7c);
      FUN_002acb00(local_80,uVar7,*(undefined2 *)(uVar15 + 0x2a),*(undefined2 *)(uVar15 + 0x28));
      FUN_00229780(&local_70,local_80);
      if (local_70 != 0) {
        FUN_00223064(&local_70);
      }
      lVar11 = *(long *)(uVar15 + 0x10);
      if (lVar11 != 0) {
        *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
        uVar15 = *(ulong *)(uVar15 + 0x10);
        lVar11 = *(long *)(uVar15 + 8);
        while (lVar11 != 0) {
          *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
          uVar15 = *(ulong *)(uVar15 + 8);
          lVar11 = *(long *)(uVar15 + 8);
        }
        goto LAB_038a23d0;
      }
      uVar13 = uVar15;
      do {
        uVar15 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffe;
        if (uVar15 == 0) goto LAB_038a20d0;
        bVar4 = *(ulong *)(uVar15 + 8) != uVar13;
        uVar13 = uVar15;
      } while (bVar4);
    } while( true );
  }
LAB_038a20d0:
  local_80[0] = 2;
  uVar15 = *(ulong *)(param_1 + 0x758);
  if (uVar15 == 0) {
LAB_038a20f4:
    local_80[0] = 3;
    uVar15 = *(ulong *)(param_1 + 0xaf8);
    if (uVar15 == 0) {
      return;
    }
    for (; lVar10 = *(long *)(uVar15 + 8), lVar10 != 0; uVar15 = *(ulong *)(uVar15 + 8)) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar15;
    }
    lVar10 = lVar14 + 0x10;
    do {
      uVar1 = *(uint *)(uVar15 + 0x20);
      if (*(char *)(lVar14 + 0x38) == '\0') {
        iVar5 = *(int *)(uVar15 + 0x24);
        puVar6 = (undefined8 *)FUN_002aad70(lVar10,0x118);
        FUN_002b54ec();
        iVar5 = FUN_002aadf0(lVar10,puVar6,iVar5 + 100U & 0xffff | 0x81000000);
        if (iVar5 == *(int *)PTR_DAT_04bcb8c8) {
          (**(code **)*puVar6)(puVar6);
          FUN_002aad48(lVar10,puVar6);
        }
      }
      else {
        iVar5 = 0;
      }
      lVar12 = *(long *)(*(long *)puVar3 + 0x70);
      for (lVar11 = *(long *)(lVar12 + 0xaf8); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar2 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar2;
            if (uVar2 != 0xffffffff) {
              if (0xf < uVar2) {
                uVar13 = 0;
              }
              *(int *)(lVar9 + 0xc0 + uVar13 * 4) = iVar5;
              lVar12 = *(long *)(*(long *)puVar3 + 0x70);
            }
            goto LAB_038a29a4;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a29a4;
        }
      }
LAB_038a29a4:
      local_80[0] = 3;
      for (lVar11 = *(long *)(lVar12 + 0xaf8); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
        while (*(uint *)(lVar11 + 0x20) <= uVar1) {
          if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
            uVar1 = *(uint *)(lVar11 + 0x24);
            uVar13 = (ulong)uVar1;
            if (uVar1 == 0xffffffff) goto LAB_038a2a24;
            if (0xf < uVar1) {
              uVar13 = 0;
            }
            uVar8 = *(undefined4 *)(lVar9 + 0xc0 + uVar13 * 4);
            goto LAB_038a2a28;
          }
          lVar11 = *(long *)(lVar11 + 0x10);
          if (lVar11 == 0) goto LAB_038a2a24;
        }
      }
LAB_038a2a24:
      uVar8 = 0;
LAB_038a2a28:
      uVar7 = FUN_002ab090(*(long *)PTR_DAT_04bc1510 + 0x10,uVar8,0x81);
      FUN_002b55fc(local_80,uVar7,*(undefined2 *)(uVar15 + 0x2a),*(undefined2 *)(uVar15 + 0x28));
      FUN_00229780(&local_70,local_80);
      if (local_70 != 0) {
        FUN_00223064(&local_70);
      }
      lVar11 = *(long *)(uVar15 + 0x10);
      if (lVar11 == 0) {
        uVar13 = uVar15;
        do {
          uVar15 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffe;
          if (uVar15 == 0) {
            return;
          }
          bVar4 = *(ulong *)(uVar15 + 8) != uVar13;
          uVar13 = uVar15;
        } while (bVar4);
      }
      else {
        *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
        uVar15 = *(ulong *)(uVar15 + 0x10);
        lVar11 = *(long *)(uVar15 + 8);
        while (lVar11 != 0) {
          *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
          uVar15 = *(ulong *)(uVar15 + 8);
          lVar11 = *(long *)(uVar15 + 8);
        }
      }
    } while( true );
  }
  for (; lVar10 = *(long *)(uVar15 + 8), lVar10 != 0; uVar15 = *(ulong *)(uVar15 + 8)) {
    *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar15;
  }
  lVar10 = lVar14 + 0x10;
LAB_038a2634:
  do {
    uVar1 = *(uint *)(uVar15 + 0x20);
    if (*(char *)(lVar14 + 0x38) == '\0') {
      iVar5 = *(int *)(uVar15 + 0x24);
      puVar6 = (undefined8 *)FUN_002aad70(lVar10,0x78);
      FUN_002a495c();
      iVar5 = FUN_002aadf0(lVar10,puVar6,iVar5 + 100U & 0xffff | 0x80000000);
      if (iVar5 == *(int *)PTR_DAT_04bcb8c8) {
        (**(code **)*puVar6)(puVar6);
        FUN_002aad48(lVar10,puVar6);
      }
    }
    else {
      iVar5 = 0;
    }
    lVar12 = *(long *)(*(long *)puVar3 + 0x70);
    for (lVar11 = *(long *)(lVar12 + 0x758); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
      while (*(uint *)(lVar11 + 0x20) <= uVar1) {
        if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
          uVar2 = *(uint *)(lVar11 + 0x24);
          uVar13 = (ulong)uVar2;
          if (uVar2 != 0xffffffff) {
            if (0xf < uVar2) {
              uVar13 = 0;
            }
            *(int *)(lVar9 + 0x80 + uVar13 * 4) = iVar5;
            lVar12 = *(long *)(*(long *)puVar3 + 0x70);
          }
          goto LAB_038a2734;
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) goto LAB_038a2734;
      }
    }
LAB_038a2734:
    local_80[0] = 2;
    for (lVar11 = *(long *)(lVar12 + 0x758); lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
      while (*(uint *)(lVar11 + 0x20) <= uVar1) {
        if (uVar1 <= *(uint *)(lVar11 + 0x20)) {
          uVar1 = *(uint *)(lVar11 + 0x24);
          uVar13 = (ulong)uVar1;
          if (uVar1 == 0xffffffff) goto LAB_038a27b4;
          if (0xf < uVar1) {
            uVar13 = 0;
          }
          uVar8 = *(undefined4 *)(lVar9 + 0x80 + uVar13 * 4);
          goto LAB_038a27b8;
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) goto LAB_038a27b4;
      }
    }
LAB_038a27b4:
    uVar8 = 0;
LAB_038a27b8:
    uVar7 = FUN_002ab090(*(long *)PTR_DAT_04bc1510 + 0x10,uVar8,0x80);
    FUN_002a4a7c(local_80,uVar7,*(undefined2 *)(uVar15 + 0x2a),*(undefined2 *)(uVar15 + 0x28));
    FUN_00229780(&local_70,local_80);
    if (local_70 != 0) {
      FUN_00223064(&local_70);
    }
    lVar11 = *(long *)(uVar15 + 0x10);
    if (lVar11 != 0) {
      *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
      uVar15 = *(ulong *)(uVar15 + 0x10);
      lVar11 = *(long *)(uVar15 + 8);
      while (lVar11 != 0) {
        *(ulong *)(lVar11 + 0x18) = *(ulong *)(lVar11 + 0x18) & 1 | uVar15;
        uVar15 = *(ulong *)(uVar15 + 8);
        lVar11 = *(long *)(uVar15 + 8);
      }
      goto LAB_038a2634;
    }
    uVar13 = uVar15;
    do {
      uVar15 = *(ulong *)(uVar13 + 0x18) & 0xfffffffffffffffe;
      if (uVar15 == 0) goto LAB_038a20f4;
      bVar4 = *(ulong *)(uVar15 + 8) != uVar13;
      uVar13 = uVar15;
    } while (bVar4);
  } while( true );
}

