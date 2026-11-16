
undefined4 FUN_02751a40(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined *local_68;
  char *pcStack_60;
  
  puVar2 = PTR_DAT_04bb2208;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "TalkNpc0Count";
  iVar5 = FUN_027512f0(*(long *)PTR_DAT_04bb2208 + 0x1740,&local_68);
  puVar4 = PTR_DAT_04bb6408;
  puVar3 = PTR_DAT_04bb6400;
  lVar9 = *(long *)puVar2;
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  uVar7 = (uint)(short)iVar5;
  uVar8 = *(uint *)(lVar9 + 0x1900);
  if ((int)uVar8 < 1) {
    lVar11 = *(long *)(lVar9 + 0x17f0);
    if (lVar11 == 0) goto LAB_02751d9c;
    puVar10 = *(uint **)(lVar11 + 8);
    if ((puVar10 != (uint *)0x0) &&
       ((((*(uint *)(lVar9 + 0x1808) <= uVar7 ||
          (*(char *)(*(long *)(lVar9 + 0x1810) + (long)(int)uVar7) != '\0')) && (uVar7 < *puVar10))
        && ((puVar10[1] != 0 && ((ushort)puVar10[2] != 0)))))) {
      iVar5 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar7 + (uint)(ushort)puVar10[2] * 8 + iVar5) +
                        (long)puVar10);
      goto joined_r0x02751c04;
    }
    uVar7 = 0xffffffff;
LAB_02751d2c:
    puVar10 = *(uint **)(lVar11 + 8);
    if (((puVar10 != (uint *)0x0) &&
        (((*(uint *)(lVar9 + 0x1808) <= param_1 ||
          (*(char *)(*(long *)(lVar9 + 0x1810) + (long)(int)param_1) != '\0')) &&
         (param_1 < *puVar10)))) && ((puVar10[1] != 0 && ((ushort)puVar10[2] != 0)))) {
      iVar5 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * param_1 + (uint)(ushort)puVar10[2] * 8 + iVar5) +
                        (long)puVar10);
      if (puVar10 != (uint *)0x0) goto LAB_02751c44;
    }
LAB_02751d90:
    uVar8 = 0xffffffff;
  }
  else {
    if (uVar7 < uVar8) {
      if (*(uint *)(lVar9 + 0x18f0) <= uVar7) {
        uVar7 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar9 + 0x18f8) + (ulong)uVar7 * 8);
joined_r0x02751c04:
      if (puVar10 == (uint *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 0;
        if (*puVar10 != 0) {
          cVar12 = *PTR_DAT_04bb6400;
          while (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
LAB_02751b24:
            puVar13 = (uint *)(ulong)*puVar10;
            uVar7 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_02751c0c;
            lVar11 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar10 + (lVar11 - (long)puVar13);
            if (lVar11 == 0) goto LAB_02752014;
            uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
            *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
            uVar7 = 0;
            if (uVar14 == 0) goto LAB_02751c0c;
            piVar6 = (int *)(lVar11 + 4);
            while (piVar6[-1] != 0x110a7053) {
              piVar6 = piVar6 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                uVar7 = 0;
                goto LAB_02751c0c;
              }
            }
            uVar7 = 0;
            iVar5 = 0;
            if (*piVar6 != -1) {
              iVar5 = *piVar6;
            }
            *(int *)(puVar4 + 4) = iVar5;
            if (*puVar10 == 0) goto LAB_02751c0c;
          }
          uVar1 = *(uint *)(puVar4 + 4);
          if ((int)uVar1 < 0) {
            if (uVar1 == 0xffffffff) goto LAB_02751b24;
LAB_02752014:
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            if ((ushort *)((ulong)uVar1 + (long)puVar10) != (ushort *)0x0) {
              uVar7 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar10);
            }
          }
        }
      }
LAB_02751c0c:
      if ((int)uVar8 < 1) {
        lVar11 = *(long *)(lVar9 + 0x17f0);
        if (lVar11 != 0) goto LAB_02751d2c;
        goto LAB_02751d90;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar8 <= param_1) goto LAB_02751d90;
    uVar8 = param_1;
    if (*(uint *)(lVar9 + 0x18f0) <= param_1) {
      uVar8 = 0;
    }
    puVar10 = *(uint **)(*(long *)(lVar9 + 0x18f8) + (ulong)uVar8 * 8);
    if (puVar10 == (uint *)0x0) goto LAB_02751d90;
LAB_02751c44:
    puVar4 = PTR_DAT_04bb6408;
    puVar3 = PTR_DAT_04bb6400;
    if (*puVar10 != 0) {
      cVar12 = *PTR_DAT_04bb6400;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar8 = *puVar10;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar1) {
            uVar8 = 0;
            if ((ushort *)((ulong)uVar1 + (long)puVar10) != (ushort *)0x0) {
              uVar8 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar10);
            }
            goto LAB_02751d94;
          }
          if (uVar1 != 0xffffffff) break;
          uVar8 = *puVar10;
        }
        if ((uVar8 == 0) || (puVar13 = (uint *)(ulong)uVar8, puVar10 == puVar13)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar13);
        if (lVar9 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar6 = (int *)(lVar9 + 4);
        while (piVar6[-1] != 0x110a7053) {
          piVar6 = piVar6 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02751d14;
        }
        iVar5 = 0;
        if (*piVar6 != -1) {
          iVar5 = *piVar6;
        }
        *(int *)(puVar4 + 4) = iVar5;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_02751d14:
    uVar8 = 0;
  }
LAB_02751d94:
  if (uVar7 != uVar8) {
    return 0xffffffff;
  }
LAB_02751d9c:
  FUN_006d8678(&local_68,"TalkNpc%dCount",0);
  iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
  uVar15 = 0;
  if (iVar5 < 0) {
    iVar5 = -1;
  }
  if (param_1 != (int)(short)iVar5) {
    uVar15 = 1;
    FUN_006d8678(&local_68,"TalkNpc%dCount",1);
    iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    if (param_1 != (int)(short)iVar5) {
      uVar15 = 2;
      FUN_006d8678(&local_68,"TalkNpc%dCount",2);
      iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
      if (iVar5 < 0) {
        iVar5 = -1;
      }
      if (param_1 != (int)(short)iVar5) {
        uVar15 = 3;
        FUN_006d8678(&local_68,"TalkNpc%dCount",3);
        iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
        if (iVar5 < 0) {
          iVar5 = -1;
        }
        if (param_1 != (int)(short)iVar5) {
          uVar15 = 4;
          FUN_006d8678(&local_68,"TalkNpc%dCount",4);
          iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
          if (iVar5 < 0) {
            iVar5 = -1;
          }
          if (param_1 != (int)(short)iVar5) {
            uVar15 = 5;
            FUN_006d8678(&local_68,"TalkNpc%dCount",5);
            iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
            if (iVar5 < 0) {
              iVar5 = -1;
            }
            if (param_1 != (int)(short)iVar5) {
              uVar15 = 6;
              FUN_006d8678(&local_68,"TalkNpc%dCount",6);
              iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
              if (iVar5 < 0) {
                iVar5 = -1;
              }
              if (param_1 != (int)(short)iVar5) {
                uVar15 = 7;
                FUN_006d8678(&local_68,"TalkNpc%dCount",7);
                iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
                if (iVar5 < 0) {
                  iVar5 = -1;
                }
                if (param_1 != (int)(short)iVar5) {
                  uVar15 = 8;
                  FUN_006d8678(&local_68,"TalkNpc%dCount",8);
                  iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
                  if (iVar5 < 0) {
                    iVar5 = -1;
                  }
                  if (param_1 != (int)(short)iVar5) {
                    FUN_006d8678(&local_68,"TalkNpc%dCount",9);
                    iVar5 = FUN_027512f0(*(long *)puVar2 + 0x1740,&local_68);
                    if (iVar5 < 0) {
                      iVar5 = -1;
                    }
                    uVar15 = 9;
                    if (param_1 != (int)(short)iVar5) {
                      uVar15 = 0xffffffff;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar15;
}

