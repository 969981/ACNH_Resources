
void FUN_00b92620(long *param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  char cVar13;
  ushort uVar14;
  uint *puVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined **local_c8 [4];
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined **local_88 [4];
  undefined1 auStack_68 [8];
  
  puVar5 = PTR_DAT_04bb43c0;
  if (param_1 != (long *)0x0) {
    local_88[0] = &PTR_FUN_0493b238;
    uVar8 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(&local_a8,param_1,uVar8);
      lVar9 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar9 + (ulong)(uVar8 >> 5) * 4) & uVar2) != 0) {
        lVar9 = *(long *)puVar5;
        uVar6 = FUN_0277d6c4(&local_a8);
        if (*(long *)puVar5 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_88[0])(local_88,&local_a8), (uVar10 & 1) == 0))
          goto LAB_00b926a0;
        }
        lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar9 + lVar12) = *(uint *)(lVar9 + lVar12) & (uVar2 ^ 0xffffffff);
      }
LAB_00b926a0:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
    FUN_026b5830(param_2,param_1,param_3,0);
    local_8d = 0;
    local_98 = 8;
    local_a0 = local_94;
    local_94[0] = 0;
    local_a8 = PTR_DAT_04bb3768 + 0x10;
    FUN_038d1270(&local_a8,"-----");
    if ((ulong)*param_2 < 0x23) {
      FUN_038d1270(&local_a8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0)
                   ,param_2[1]);
    }
    uVar17 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    uVar7 = FUN_006bd550(local_a0,0);
    local_c8[0] = (undefined **)CONCAT44(local_c8[0]._4_4_,uVar7);
    puVar11 = (uint *)FUN_0079e770(uVar17,local_c8);
    puVar4 = PTR_DAT_04bb40b8;
    puVar3 = PTR_DAT_04bb40b0;
    if (puVar11 != (uint *)0x0) {
      if (*puVar11 != 0) {
        cVar13 = *PTR_DAT_04bb40b0;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x50);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar11) != (ushort *)0x0) {
                uVar14 = *(ushort *)((ulong)uVar8 + (long)puVar11);
                goto LAB_00b92900;
              }
              break;
            }
            if (uVar8 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)*puVar11;
          uVar14 = 0xfffe;
          if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_00b92900;
          lVar9 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar11 + (lVar9 - (long)puVar15);
          if (lVar9 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
          *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar16 = (int *)(lVar9 + 4);
          while (piVar16[-1] != -0x78f0e1d7) {
            piVar16 = piVar16 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_00b928fc;
          }
          iVar1 = 0;
          if (*piVar16 != -1) {
            iVar1 = *piVar16;
          }
          *(int *)(puVar4 + 0x50) = iVar1;
          if (*puVar11 == 0) break;
        } while( true );
      }
LAB_00b928fc:
      uVar14 = 0xfffe;
LAB_00b92900:
      local_c8[0] = (undefined **)(ulong)uVar14;
      FUN_0277d4ac(local_c8);
      lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
      uVar8 = FUN_0277d6c4(local_c8);
      if ((uVar8 >> 3 & 0x1fff) < 0x753) {
        lVar12 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
        *(uint *)(lVar9 + lVar12) =
             *(uint *)(lVar9 + lVar12) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
    }
    uVar8 = 0;
    local_c8[0] = &PTR_FUN_0493b260;
    do {
      (**(code **)(*param_1 + 0x10))(auStack_68,param_1,uVar8);
      lVar9 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = 1 << (ulong)(uVar8 & 0x1f);
      if ((*(uint *)(lVar9 + (ulong)(uVar8 >> 5) * 4) & uVar2) != 0) {
        lVar9 = *(long *)puVar5;
        uVar6 = FUN_0277d6c4(auStack_68);
        if (*(long *)puVar5 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = (*(code *)*local_c8[0])(local_c8,auStack_68), (uVar10 & 1) != 0))
          goto LAB_00b929a0;
        }
        lVar9 = (**(code **)(*param_1 + 0x18))(param_1);
        lVar12 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(lVar9 + lVar12) = *(uint *)(lVar9 + lVar12) & (uVar2 ^ 0xffffffff);
      }
LAB_00b929a0:
      uVar8 = uVar8 + 1;
    } while (uVar8 != 15000);
  }
  return;
}

