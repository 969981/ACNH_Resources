
void FUN_0297a8d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  uVar5 = s_invalid_name_040e8f53._8_4_;
  uVar4 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  plVar1 = (long *)(param_1 + 8);
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar2;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar1 = (long *)(param_1 + 0x228);
  local_6d = 0;
  local_ec = (char  [8])uVar4;
  local_e4 = (char  [4])uVar5;
  local_e0 = 0;
  local_100 = puVar2;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar7 = FUN_03853d00(plVar1,&local_100);
  if ((uVar7 & 1) != 0) {
    uVar7 = (**(code **)(*plVar1 + 0x20))(plVar1,&local_100,param_2);
  }
  puVar6 = PTR_DAT_04bc38b0;
  puVar2 = PTR_DAT_04bb43c0;
  uVar15 = *(uint *)(param_1 + 1000);
  if ((0 < (int)uVar15) ||
     (((*(long *)(param_1 + 0x2d8) != 0 &&
       (puVar8 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar8 != (uint *)0x0)) &&
      (uVar15 = *puVar8, uVar15 != 0)))) {
    uVar16 = 0;
    do {
      if ((int)*(uint *)(param_1 + 1000) < 1) {
        if (((((*(long *)(param_1 + 0x2d8) != 0) &&
              (puVar8 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(param_1 + 0x2f0) <= uVar16 ||
              (*(char *)(*(long *)(param_1 + 0x2f8) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar10 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar10 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar10) +
                           (long)puVar8);
          goto joined_r0x0297ab78;
        }
      }
      else if (uVar16 < *(uint *)(param_1 + 1000)) {
        uVar3 = uVar16;
        if (*(uint *)(param_1 + 0x3d8) <= uVar16) {
          uVar3 = 0;
        }
        puVar8 = *(uint **)(*(long *)(param_1 + 0x3e0) + (ulong)uVar3 * 8);
joined_r0x0297ab78:
        if (puVar8 != (uint *)0x0) {
          if (*puVar8 != 0) {
            cVar9 = *PTR_DAT_04bc38a8;
            do {
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *PTR_DAT_04bc38a8 = 1;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar6 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x28);
                if (-1 < (int)uVar3) {
                  if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
                    uVar14 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
                    goto LAB_0297ab94;
                  }
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)*puVar8;
              uVar14 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_0297ab94;
              lVar17 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar8 + (lVar17 - (long)puVar11);
              if (lVar17 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
              *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar13 = (int *)(lVar17 + 4);
              while (piVar13[-1] != 0x54706054) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0297ab90;
              }
              iVar10 = 0;
              if (*piVar13 != -1) {
                iVar10 = *piVar13;
              }
              *(int *)(puVar6 + 0x28) = iVar10;
              if (*puVar8 == 0) break;
            } while( true );
          }
LAB_0297ab90:
          uVar14 = 0;
LAB_0297ab94:
          iVar10 = 0;
          while( true ) {
            FUN_0297ac30(&local_100,uVar7,uVar14,iVar10);
            lVar17 = *(long *)puVar2;
            uVar7 = FUN_0277d6c4(&local_100);
            if (*(long *)puVar2 == 0) break;
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar3 = ((uint)uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar3) ||
               (iVar10 = iVar10 + 1,
               *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) break;
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return;
}

