
void FUN_01f91434(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  uint *puVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  char *pcVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  char local_58 [4];
  char local_54 [4];
  uint local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar6 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  plVar1 = param_1 + 0xef6;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01f914d0;
LAB_01f91530:
    uVar18 = (uint)*pbVar17;
    if (7 < uVar18) {
      uVar18 = 0xffffffff;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar13 + 0x158);
    }
    if ((*pbVar17 < 8) ||
       (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar17 < 8)))) goto LAB_01f91530;
LAB_01f914d0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f91528:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_01f91530;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar11 = *(byte *)(lVar13 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar4 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar17 = (byte *)(lVar13 + 0x471);
      }
    }
    uVar18 = (uint)*pbVar17;
    if (7 < *pbVar17) goto LAB_01f91528;
  }
  pbVar17 = *(byte **)PTR_DAT_04bb38d0;
  uVar8 = (**(code **)(*(long *)param_1[1] + 0x180))();
  lVar13 = param_1[1];
  if (((((uVar8 & 1) != 0) &&
       ((*(long *)(lVar13 + 0x690) == 0 ||
        ((*(byte *)(*(long *)(lVar13 + 0x690) + 7) & 0x30) != 0x20)))) &&
      (local_38 = *pbVar17 >> 2 & 0xf, local_38 == 2)) && ((int)*plVar1 == 1)) {
    (**(code **)(*param_1 + 0x38))(param_1,0x43,0,1);
    lVar13 = param_1[1];
  }
  if (*(long *)(lVar13 + 0x690) == 0) {
    uVar12 = *(uint *)(param_1 + 0x162a);
LAB_01f915f8:
    if ((uVar12 & 1) != 0) {
      *(uint *)(param_1 + 0x162a) = uVar12 & 0xfffffffe;
      local_38 = *pbVar17 >> 2 & 0xf;
      if (local_38 < 3) {
        if ((int)*plVar1 != 0x43) {
          (**(code **)(*param_1 + 0x38))(param_1,0x43,0,1);
        }
        lVar13 = *(long *)PTR_DAT_04bb26a8;
        if (*(long *)(lVar13 + 0x11e610) != 0) {
          uVar12 = *(uint *)(FUN_0011e5e0 + lVar13);
          if (uVar12 == 0xffffffff) {
            lVar13 = 0;
          }
          else {
            if (*(uint *)(lVar13 + 0x11e608) <= uVar12) {
              uVar12 = 0;
            }
            lVar13 = *(long *)(lVar13 + 0x11e610) + (long)(int)uVar12 * 0x80;
          }
          puVar2 = &DAT_055f7448;
          if (lVar13 != 0) {
            puVar2 = (undefined8 *)(lVar13 + 0x40);
          }
          *(undefined2 *)((long)puVar2 + 10) = 0x101;
        }
      }
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x162a);
    if ((*(byte *)(*(long *)(lVar13 + 0x690) + 7) & 0x30) != 0x20) goto LAB_01f915f8;
    *(uint *)(param_1 + 0x162a) = uVar12 | 1;
  }
  if ((*(long *)(param_1[1] + 0x690) != 0) &&
     ((*(byte *)(*(long *)(param_1[1] + 0x690) + 7) & 0x30) == 0x20)) {
    lVar13 = *(long *)puVar6;
    pbVar14 = pbVar10;
    if (lVar13 == 0) {
      if (7 < *pbVar10) goto LAB_01f91724;
LAB_01f91784:
      uVar12 = (uint)*pbVar14;
      if (7 < uVar12) {
        uVar12 = 0xff;
      }
    }
    else {
      if (*(int *)(lVar13 + 0x15c) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x158);
      }
      if ((*pbVar14 < 8) ||
         (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar14 < 8))))
      goto LAB_01f91784;
LAB_01f91724:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f9177c:
        pbVar14 = PTR_DAT_04bb5038;
        goto LAB_01f91784;
      }
      lVar16 = **(long **)PTR_DAT_04bb27d0;
      bVar11 = *(byte *)(lVar16 + 0x473);
      pbVar14 = PTR_DAT_04bb5038;
      if ((long)(char)bVar11 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
        if (7 < bVar11) {
          puVar4 = (uint *)(lVar16 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar14 = (byte *)(lVar16 + 0x471);
        }
      }
      uVar12 = (uint)*pbVar14;
      if (7 < *pbVar14) goto LAB_01f9177c;
    }
    if (*(int *)(lVar13 + 0x15c) == 0) {
      if (7 < uVar12) {
        uVar12 = 0xff;
      }
      if ((pbVar17[0x88] >> (ulong)(uVar12 & 0x1f) & 1) == 0) goto LAB_01f917f0;
    }
    else {
      uVar12 = (uint)pbVar17[0x88] - (pbVar17[0x88] >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      if ((uVar12 + (uVar12 >> 0x10) & 0x3f) == 0) {
LAB_01f917f0:
        local_38 = *pbVar17 >> 2 & 0xf;
        if ((local_38 == 6) || (local_38 == 1)) {
          if ((int)*plVar1 != 0x43) {
            uVar9 = 0x43;
            goto LAB_01f91834;
          }
        }
        else if ((int)*plVar1 != 1) {
          uVar9 = 1;
LAB_01f91834:
          (**(code **)(*param_1 + 0x38))(param_1,uVar9,0,1);
        }
      }
    }
  }
  bVar7 = (uVar18 & 0xf8) != 0;
  pbVar14 = pbVar17 + 0x8c;
  local_38 = 0;
  if (bVar7) {
    uVar18 = 0xffffffff;
  }
  cVar5 = (char)uVar18;
  uVar8 = (ulong)(uint)(int)cVar5;
  pbVar3 = pbVar14 + uVar8 * 4;
  if (bVar7) {
    uVar8 = 0;
    pbVar3 = pbVar14;
  }
  if ((*(int *)pbVar3 == 0) || (local_38 = 1, *(int *)(pbVar14 + uVar8 * 4) == 1))
  goto LAB_01f91a68;
  lVar13 = *(long *)puVar6;
  if (lVar13 == 0) {
LAB_01f918d8:
    if (*pbVar10 < 8) goto LAB_01f91950;
LAB_01f918e4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f91948:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_01f91950;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar11 = *(byte *)(lVar13 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar4 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar11 = *pbVar10;
    if (7 < bVar11) goto LAB_01f91948;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f918d8;
      }
      goto LAB_01f918e4;
    }
LAB_01f91950:
    bVar11 = *pbVar10;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
  }
  local_38 = (uint)bVar11;
  uVar8 = FUN_00a738a0(&local_38,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar6 + 0x15c) == 0) {
      bVar11 = pbVar17[0x88];
      if ((bVar11 >> (ulong)((int)cVar5 & 0x1f) & 1) == 0) goto LAB_01f91a68;
    }
    else {
      bVar11 = pbVar17[0x88];
      uVar12 = (uint)bVar11 - (bVar11 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      if ((uVar12 + (uVar12 >> 0x10) & 0x3f) == 0) goto LAB_01f91a68;
    }
    local_54[1] = 0;
    local_38 = 0;
    local_32 = 0;
    pbVar17[0x88] = bVar11 & ((byte)(1 << (ulong)(uVar18 & 0x1f)) ^ 0xff);
    local_34 = 0xff00;
    local_54[0] = cVar5;
    if (-1 < *(int *)(PTR_DAT_04bc2ba8 + 8)) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,*(int *)(PTR_DAT_04bc2ba8 + 8),&local_38,
                   local_54,2,0);
    }
    local_58[0] = cVar5;
    FUN_008a6584(pbVar17,local_58,0,0xffffffff);
    if ((int)*plVar1 != 0x43) {
      (**(code **)(*param_1 + 0x38))(param_1,0x43,0,1);
    }
  }
LAB_01f91a68:
  if (pbVar17[0x88] == 0) {
    lVar13 = param_1[1];
    if ((((*(long *)(lVar13 + 0x690) != 0) &&
         ((*(byte *)(*(long *)(lVar13 + 0x690) + 7) & 0x30) == 0x20)) &&
        ((*(byte *)(lVar13 + 0x69d) >> 5 & 1) != 0)) && (*(long *)PTR_DAT_04bb5010 != 0)) {
      lVar16 = **(long **)PTR_DAT_04bb27d0;
      bVar11 = *(byte *)(lVar16 + 0x473);
      pcVar15 = PTR_DAT_04bc1220;
      if ((long)(char)bVar11 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
        if (7 < bVar11) {
          puVar4 = (uint *)(lVar16 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pcVar15 = (char *)(lVar16 + 0x473);
        }
      }
      if (*pcVar15 == *(char *)(*(long *)PTR_DAT_04bb5010 + 4)) {
        FUN_020a2464(*(undefined4 *)(lVar13 + 0x698));
      }
    }
  }
  return;
}

