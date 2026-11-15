
undefined8
FUN_0207da6c(long param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  if (3 < *(int *)(param_1 + 200) - 2U) {
    uVar5 = FUN_021fd6f0(param_2,param_3,param_4,param_5,*(int *)(param_1 + 200));
    return uVar5;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xcc);
  param_2[1] = *(undefined4 *)(param_1 + 0xd0);
  param_2[2] = *(undefined4 *)(param_1 + 0xd4);
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_4);
  lVar9 = *(long *)puVar3;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_78 = 0;
      local_80 = *param_4;
      uStack_7c = param_4[1];
      uVar4 = FUN_0277d6c4(&local_80);
      fVar14 = 0.0;
      fVar13 = -0.5;
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_4);
          __s = PTR_DAT_04bbfe90;
          puVar3 = PTR_DAT_04bbfe88;
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
             (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
             puVar10 != (uint *)0x0)) {
            uVar4 = *puVar10;
            if (uVar4 == 0) {
              fVar13 = 0.0;
            }
            else {
              cVar12 = *PTR_DAT_04bbfe88;
              do {
                if (cVar12 != '\0') {
                  uVar2 = *(uint *)(__s + 0xdc);
                  if ((int)uVar2 < 0) {
                    if (uVar2 == 0xffffffff) goto LAB_0207dc24;
LAB_0207dd2c:
                    fVar13 = 0.0;
                  }
                  else {
                    if ((float *)((ulong)uVar2 + (long)puVar10) == (float *)0x0) goto LAB_0207dd2c;
                    fVar14 = *(float *)((ulong)uVar2 + (long)puVar10);
                    fVar13 = 0.0;
                    if (0.0 <= fVar14) {
                      fVar13 = fVar14 + -0.5;
                    }
                  }
LAB_0207dd30:
                  uVar4 = *puVar10;
                  if (uVar4 == 0) goto LAB_0207de10;
                  cVar12 = *puVar3;
                  goto LAB_0207dd54;
                }
                cVar12 = '\x01';
                *puVar3 = 1;
                memset(__s,0xff,0x1ac);
                uVar4 = *puVar10;
LAB_0207dc24:
                puVar6 = (uint *)(ulong)uVar4;
                fVar13 = 0.0;
                if ((puVar6 == (uint *)0x0) || (puVar10 == puVar6)) goto LAB_0207dd30;
                lVar9 = 0xc;
                if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar10 + (lVar9 - (long)puVar6);
                if (lVar9 == 0) goto LAB_0207dd30;
                uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
                *(undefined4 *)(__s + 0xdc) = 0xfffffffe;
                if (uVar7 == 0) goto LAB_0207dd30;
                piVar8 = (int *)(lVar9 + 4);
                while (piVar8[-1] != -0x7a39c48f) {
                  piVar8 = piVar8 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_0207dd30;
                }
                fVar13 = 0.0;
                iVar1 = 0;
                if (*piVar8 != -1) {
                  iVar1 = *piVar8;
                }
                *(int *)(__s + 0xdc) = iVar1;
                uVar4 = *puVar10;
              } while (uVar4 != 0);
            }
          }
        }
      }
      goto LAB_0207de14;
    }
  }
  fVar13 = (float)param_2[1];
LAB_0207dcd4:
  *param_3 = fVar13;
  return 1;
LAB_0207dd54:
  if (cVar12 == '\0') {
    cVar12 = '\x01';
    *puVar3 = 1;
    memset(__s,0xff,0x1ac);
    uVar4 = *puVar10;
LAB_0207dd94:
    puVar6 = (uint *)(ulong)uVar4;
    if ((puVar6 == (uint *)0x0) || (puVar10 == puVar6)) goto LAB_0207de10;
    lVar9 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar10 + (lVar9 - (long)puVar6);
    if (lVar9 == 0) goto LAB_0207de10;
    uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x28) = 0xfffffffe;
    if (uVar7 == 0) goto LAB_0207de10;
    piVar8 = (int *)(lVar9 + 4);
    while (piVar8[-1] != -0x3e783aea) {
      piVar8 = piVar8 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) goto LAB_0207de10;
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    *(int *)(__s + 0x28) = iVar1;
    uVar4 = *puVar10;
    if (uVar4 == 0) goto LAB_0207de10;
    goto LAB_0207dd54;
  }
  uVar2 = *(uint *)(__s + 0x28);
  if ((int)uVar2 < 0) {
    if (uVar2 != 0xffffffff) goto LAB_0207de10;
    goto LAB_0207dd94;
  }
  if ((float *)((ulong)uVar2 + (long)puVar10) != (float *)0x0) {
    fVar14 = *(float *)((ulong)uVar2 + (long)puVar10);
    goto LAB_0207de14;
  }
LAB_0207de10:
  fVar14 = 0.0;
LAB_0207de14:
  fVar13 = (float)param_2[1] + fVar13 * fVar14;
  param_2[1] = fVar13;
  goto LAB_0207dcd4;
}

