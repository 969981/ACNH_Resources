
void FUN_011e72b8(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  undefined8 local_70;
  undefined4 local_68 [2];
  uint *local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = (uint *)(param_1 + 0x24f78);
  puVar2 = (undefined8 *)(param_1 + 0x278);
  if (*puVar1 < 1000) {
    puVar2 = (undefined8 *)(param_1 + 0x278) + (ulong)*puVar1 * 0xf;
  }
  FUN_01256dcc(puVar2);
  puVar5 = PTR_DAT_04bbbc68;
  if (*(int *)(param_2 + 0x3c) == 0x19) {
    local_28 = *(undefined4 *)puVar2;
    uStack_24 = *(undefined4 *)((long)puVar2 + 4);
    lVar14 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))) {
      uVar7 = FUN_0277d6c4(&local_28);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
          local_70 = puVar2[5];
          puVar10 = &DAT_040f9597;
        }
        else {
          local_70 = puVar2[5];
          puVar10 = &DAT_0405c46c;
        }
        local_68[0] = *(undefined4 *)(puVar2 + 6);
        local_4c = *puVar2;
        FUN_011ea808(0,param_1,&local_4c,&local_70,puVar10);
      }
    }
    local_54 = *(undefined4 *)puVar2;
    uStack_50 = *(undefined4 *)((long)puVar2 + 4);
    lVar14 = *(long *)puVar5;
    if ((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))))) {
      uVar7 = FUN_0277d6c4(&local_54);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        FUN_0124c030(&local_70,&local_54);
        uVar9 = FUN_0123d890(local_60,4);
        puVar10 = PTR_DAT_04bbbc78;
        puVar5 = PTR_DAT_04bbbc70;
        bVar6 = false;
        if (((uVar9 & 1) != 0) && (local_60 != (uint *)0x0)) {
          uVar7 = *local_60;
          if (uVar7 != 0) {
            cVar11 = *PTR_DAT_04bbbc70;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined4 *)(puVar10 + 0x60) = 0xffffffff;
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
                uVar7 = *local_60;
              }
              else {
                uVar3 = *(uint *)(puVar10 + 0x4c);
                if (-1 < (int)uVar3) {
                  if ((char *)((ulong)uVar3 + (long)local_60) == (char *)0x0) break;
                  bVar6 = *(char *)((ulong)uVar3 + (long)local_60) != '\0';
                  goto LAB_011e757c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)uVar7;
              bVar6 = false;
              if ((puVar12 == (uint *)0x0) || (local_60 == puVar12)) goto LAB_011e757c;
              lVar14 = 0xc;
              if (*(char *)((long)local_60 + (10 - (long)puVar12)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)local_60 + (lVar14 - (long)puVar12);
              if (lVar14 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)local_60 + (8 - (long)puVar12));
              *(undefined4 *)(puVar10 + 0x4c) = 0xfffffffe;
              if (uVar9 == 0) break;
              piVar13 = (int *)(lVar14 + 4);
              while (piVar13[-1] != -0xa58ccc9) {
                piVar13 = piVar13 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_011e7578;
              }
              bVar6 = false;
              iVar8 = 0;
              if (*piVar13 != -1) {
                iVar8 = *piVar13;
              }
              *(int *)(puVar10 + 0x4c) = iVar8;
              uVar7 = *local_60;
              if (uVar7 == 0) goto LAB_011e757c;
            } while( true );
          }
LAB_011e7578:
          bVar6 = false;
        }
LAB_011e757c:
        iVar8 = FUN_0123db50(local_68);
        if (iVar8 == 0x21) {
          bVar6 = true;
        }
        iVar8 = FUN_0123db50(local_68,local_60);
        if (iVar8 == 0x22) {
          bVar6 = true;
        }
        iVar8 = FUN_0123db50(local_68,local_60);
        if (iVar8 == 0x2e) {
          bVar6 = true;
        }
        if (bVar6) {
          local_44 = *(undefined4 *)(puVar2 + 6);
          local_4c = puVar2[5];
          local_28 = *(undefined4 *)puVar2;
          uStack_24 = *(undefined4 *)((long)puVar2 + 4);
          FUN_011ea808(0,param_1,&local_28,&local_4c,&DAT_04061fa0);
        }
      }
    }
  }
  iVar8 = FUN_0277d6c4(puVar2);
  if ((iVar8 == 0xea79) &&
     (uVar7 = *(uint *)(puVar2 + 3), DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980)) {
    uVar4 = *(uint *)((long)puVar2 + 0x1c);
    uVar3 = (uVar4 & 0x1fffffe) * 0x80 + ((int)uVar7 >> 1);
    if ((DAT_05233974 <= (int)uVar4 && (int)uVar4 <= DAT_05233984) && uVar3 >> 0xf == 0) {
      lVar14 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(&DAT_0514e4e8 + lVar14) =
           *(uint *)(&DAT_0514e4e8 + lVar14) | 1 << (ulong)(uVar7 >> 1 & 0x1f);
    }
  }
  *puVar1 = *puVar1 + 1;
  return;
}

