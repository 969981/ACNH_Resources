
void FUN_0078c730(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  undefined *puVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  lVar10 = param_3 + 8;
  iVar3 = FUN_0277d6c4(lVar10);
  if (((iVar3 == 0x1618) || (iVar3 = FUN_0277d6c4(lVar10), iVar3 == 0x315a)) ||
     (iVar3 = FUN_0277d6c4(lVar10), iVar3 == 0x3805)) {
    FUN_01b01948(&local_80,param_3);
    puVar9 = PTR_DAT_04bb43c0;
    local_68 = (uint *)0x0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = local_80;
    uStack_6c = uStack_7c;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar9 == 0) {
LAB_0078c850:
      puVar11 = (uint *)0x0;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0078c850;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_80);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (*(uint *)(lVar10 + 0x1d8) <= uVar4) goto LAB_0078c850;
      puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar11 != (uint *)0x0) {
        local_68 = puVar11;
      }
    }
    iVar3 = FUN_01aee84c(&local_78);
    puVar2 = PTR_DAT_04bbfe90;
    puVar9 = PTR_DAT_04bbfe88;
    if (iVar3 != 0) {
      if (iVar3 == 2) {
LAB_0078cc64:
        if (puVar11 == (uint *)0x0) {
          uVar4 = 0xbc;
        }
        else {
          uVar1 = *puVar11;
          uVar4 = 0;
          if ((uVar1 != 0) && (puVar11 != (uint *)(ulong)uVar1)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar1);
            uVar4 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar10 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar4 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                     uVar4 < 0xbd)) goto LAB_0078cd14;
                }
              }
              uVar4 = 0;
            }
          }
        }
LAB_0078cd14:
        lVar10 = *(long *)PTR_DAT_04bc0508;
        if ((lVar10 == 0) || (0xbc < uVar4)) {
LAB_0078ce24:
          puVar9 = PTR_DAT_04bc02a8;
          goto LAB_0078ce38;
        }
        goto LAB_0078cd38;
      }
      if (iVar3 == 1) {
        if (puVar11 == (uint *)0x0) goto LAB_0078ccf8;
        uVar4 = *puVar11;
        if (uVar4 != 0) {
          cVar12 = *PTR_DAT_04bbfe88;
          local_80 = 1;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *puVar9 = 1;
              memset(puVar2,0xff,0x1ac);
              uVar4 = *puVar11;
            }
            else {
              uVar1 = *(uint *)(puVar2 + 0x18c);
              uVar6 = (ulong)uVar1;
              if (-1 < (int)uVar1) goto LAB_0078ce5c;
              if (uVar1 != 0xffffffff) break;
            }
            puVar8 = (uint *)(ulong)uVar4;
            lVar10 = 0;
            if ((puVar8 == (uint *)0x0) || (lVar10 = 0, puVar11 == puVar8)) goto LAB_0078cc30;
            lVar10 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar5 = (long)puVar11 + (lVar10 - (long)puVar8);
            lVar10 = 0;
            if (lVar5 == 0) goto LAB_0078cc30;
            uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
            *(undefined4 *)(puVar2 + 0x18c) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar7 = (int *)(lVar5 + 4);
            while (piVar7[-1] != 0x3febc642) {
              piVar7 = piVar7 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_0078cc2c;
            }
            iVar3 = 0;
            if (*piVar7 != -1) {
              iVar3 = *piVar7;
            }
            *(int *)(puVar2 + 0x18c) = iVar3;
            uVar4 = *puVar11;
            if (uVar4 == 0) break;
          } while( true );
        }
        goto LAB_0078cc2c;
      }
    }
  }
  else {
    iVar3 = FUN_0277d6c4(lVar10);
    if (iVar3 == 0x342f) {
      FUN_01b01dfc(&local_80,param_3);
      puVar9 = PTR_DAT_04bb43c0;
      local_68 = (uint *)0x0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = local_80;
      uStack_6c = uStack_7c;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar9 == 0) {
LAB_0078cb2c:
        puVar11 = (uint *)0x0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0078cb2c;
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_80);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (*(uint *)(lVar10 + 0x1d8) <= uVar4) goto LAB_0078cb2c;
        puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar11 != (uint *)0x0) {
          local_68 = puVar11;
        }
      }
      iVar3 = FUN_01aee84c(&local_78);
      puVar2 = PTR_DAT_04bbfe90;
      puVar9 = PTR_DAT_04bbfe88;
      if (iVar3 == 0) goto LAB_0078cc48;
      if (iVar3 == 2) goto LAB_0078cc64;
      if (iVar3 != 1) goto LAB_0078cc48;
      if (puVar11 == (uint *)0x0) goto LAB_0078ccf8;
      uVar4 = *puVar11;
      if (uVar4 != 0) {
        cVar12 = *PTR_DAT_04bbfe88;
        local_80 = 1;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *puVar9 = 1;
            memset(puVar2,0xff,0x1ac);
            uVar4 = *puVar11;
          }
          else {
            uVar1 = *(uint *)(puVar2 + 0x18c);
            uVar6 = (ulong)uVar1;
            if (-1 < (int)uVar1) goto LAB_0078ce5c;
            if (uVar1 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)uVar4;
          lVar10 = 0;
          if ((puVar8 == (uint *)0x0) || (puVar11 == puVar8)) goto LAB_0078cc30;
          lVar10 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar5 = (long)puVar11 + (lVar10 - (long)puVar8);
          lVar10 = 0;
          if (lVar5 == 0) goto LAB_0078cc30;
          uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
          *(undefined4 *)(puVar2 + 0x18c) = 0xfffffffe;
          if (uVar6 == 0) break;
          piVar7 = (int *)(lVar5 + 4);
          while (piVar7[-1] != 0x3febc642) {
            piVar7 = piVar7 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_0078cc2c;
          }
          iVar3 = 0;
          if (*piVar7 != -1) {
            iVar3 = *piVar7;
          }
          *(int *)(puVar2 + 0x18c) = iVar3;
          uVar4 = *puVar11;
          if (uVar4 == 0) break;
        } while( true );
      }
LAB_0078cc2c:
      lVar10 = 0;
      goto LAB_0078cc30;
    }
    iVar3 = FUN_01aee84c(param_3);
    puVar2 = PTR_DAT_04bbfe90;
    puVar9 = PTR_DAT_04bbfe88;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar3);
    if (iVar3 != 0) {
      if (iVar3 != 2) {
        if (iVar3 != 1) goto LAB_0078cc48;
        puVar11 = *(uint **)(param_3 + 0x10);
        if (puVar11 != (uint *)0x0) {
          uVar4 = *puVar11;
          if (uVar4 != 0) {
            cVar12 = *PTR_DAT_04bbfe88;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *puVar9 = 1;
                memset(puVar2,0xff,0x1ac);
                uVar4 = *puVar11;
              }
              else {
                uVar1 = *(uint *)(puVar2 + 0x18c);
                uVar6 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_0078ce5c;
                if (uVar1 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar4;
              lVar10 = 0;
              if ((puVar8 == (uint *)0x0) || (puVar11 == puVar8)) goto LAB_0078cc30;
              lVar10 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar5 = (long)puVar11 + (lVar10 - (long)puVar8);
              lVar10 = 0;
              if (lVar5 == 0) goto LAB_0078cc30;
              uVar6 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
              *(undefined4 *)(puVar2 + 0x18c) = 0xfffffffe;
              if (uVar6 == 0) break;
              piVar7 = (int *)(lVar5 + 4);
              while (piVar7[-1] != 0x3febc642) {
                piVar7 = piVar7 + 2;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto LAB_0078cc2c;
              }
              iVar3 = 0;
              if (*piVar7 != -1) {
                iVar3 = *piVar7;
              }
              *(int *)(puVar2 + 0x18c) = iVar3;
              uVar4 = *puVar11;
              if (uVar4 == 0) break;
            } while( true );
          }
          goto LAB_0078cc2c;
        }
LAB_0078ccf8:
        lVar5 = *(long *)(PTR_PTR_04bb2238 + 8);
        goto LAB_0078cd54;
      }
      puVar11 = *(uint **)(param_3 + 0x10);
      if (puVar11 == (uint *)0x0) {
        uVar4 = 0xbc;
      }
      else {
        uVar1 = *puVar11;
        uVar4 = 0;
        if ((uVar1 != 0) && (puVar11 != (uint *)(ulong)uVar1)) {
          puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar1);
          uVar4 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar4 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar4 < 0xbd)) goto LAB_0078cdfc;
              }
            }
            uVar4 = 0;
          }
        }
      }
LAB_0078cdfc:
      lVar10 = *(long *)PTR_DAT_04bc0508;
      if ((lVar10 == 0) || (0xbc < uVar4)) goto LAB_0078ce24;
LAB_0078cd38:
      lVar5 = lVar10 + (ulong)uVar4 * 0x38;
      if (0xbc < uVar4) {
        lVar5 = lVar10;
      }
      lVar5 = *(long *)(lVar5 + 8);
      goto LAB_0078cd54;
    }
  }
LAB_0078cc48:
  puVar9 = *(undefined **)(PTR_PTR_04bb2238 + 8);
LAB_0078ce38:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar9;
  return;
LAB_0078ce5c:
  lVar10 = uVar6 + (long)puVar11;
LAB_0078cc30:
  lVar5 = *(long *)PTR_PTR_04bc0008;
  if (lVar10 != 0) {
    lVar5 = lVar10;
  }
LAB_0078cd54:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar5;
  return;
}

