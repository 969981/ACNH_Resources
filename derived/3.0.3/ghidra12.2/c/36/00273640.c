
uint FUN_00273640(long param_1,byte param_2,undefined8 param_3,undefined8 *param_4,uint *param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *__src;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined1 auStack_e0 [128];
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    FUN_002b3fa8(auStack_e0);
    bVar6 = FUN_0026be6c(DAT_04c603c8);
    memset(*(void **)(param_1 + 0xa0),0,(ulong)*(uint *)(param_1 + 0x9c));
    __src = *(undefined1 **)(param_1 + 0xa0);
    uVar7 = FUN_0026c8bc(DAT_04c603c8);
    __src[8] = uVar7;
    uVar7 = FUN_0026c8c4(DAT_04c603c8);
    lVar9 = DAT_04c603c8;
    __src[9] = uVar7;
    __src[10] = *(undefined1 *)(lVar9 + 0x98);
    FUN_00228480(__src + 0xc,*(undefined4 *)(lVar9 + 0xbc));
    plVar8 = (long *)FUN_002ba788(DAT_04c61168);
    lVar9 = FUN_002ba790(DAT_04c61168);
    lVar15 = *(long *)(lVar9 + 0x20);
    lVar9 = lVar9 + 0x18;
    uVar16 = 0;
    if (lVar15 == lVar9) {
      uVar18 = 0xff;
      uVar13 = 0x10;
      uVar7 = 0xff;
    }
    else {
      uVar14 = 0x10;
      uVar17 = 0xff;
      uVar19 = 0xff;
      do {
        while( true ) {
          uVar18 = (undefined1)uVar19;
          uVar7 = (undefined1)uVar17;
          uVar13 = (uint)uVar14;
          plVar11 = *(long **)(lVar15 + 0x10);
          bVar3 = *(byte *)(plVar11 + 7);
          if (bVar3 < 0x20) break;
          local_ec = 0;
          local_f4 = 0x200000000000;
          (**(code **)(*plVar11 + 0x28))(plVar11,&local_f4);
          lVar15 = *(long *)(lVar15 + 8);
          if (lVar15 == lVar9) goto LAB_002737e4;
        }
        uVar12 = uVar16;
        if (bVar3 != bVar6) {
          uVar12 = uVar17;
        }
        uVar7 = (undefined1)uVar12;
        uVar2 = uVar16;
        if (bVar3 != param_2) {
          uVar2 = uVar19;
        }
        uVar18 = (undefined1)uVar2;
        local_e4 = 0;
        (**(code **)(*plVar8 + 0x20))(&local_f4,plVar8,plVar11,auStack_e0);
        FUN_002b4564(&local_f4,auStack_e0,__src + uVar14,&local_e4,0x40);
        __src[uVar13 + 0x40] = bVar3;
        FUN_002284a0(__src + (uVar13 + 0x41),*(undefined2 *)(*(long *)(lVar15 + 0x10) + 0xb2));
        uVar13 = uVar13 + 0x44;
        uVar14 = (ulong)uVar13;
        uVar16 = uVar16 + 1;
        lVar15 = *(long *)(lVar15 + 8);
        uVar17 = uVar12;
        uVar19 = uVar2;
      } while (lVar15 != lVar9);
    }
LAB_002737e4:
    lVar9 = FUN_002aaa54(param_1);
    if (0xdf < (uVar16 - 0x21 & 0xff)) {
      uVar17 = uVar16 & 0xff;
      uVar19 = uVar17 * 0x44 + 0x54;
      uVar12 = uVar17;
      do {
        uVar19 = uVar19 - 0x44;
        if (uVar19 <= *(int *)(lVar9 + 8) - 0x30U) {
          uVar19 = 0;
          if (uVar12 != 0) {
            uVar19 = uVar17 / uVar12;
          }
          if (uVar17 != uVar19 * uVar12) {
            uVar19 = uVar19 + 1;
          }
          cVar5 = (char)uVar16;
          if ((uVar19 & 0xff) == 1) {
            lVar9 = FUN_002aaa54(param_1);
            if (uVar13 <= *(int *)(lVar9 + 8) - 0x30U) {
              uVar19 = 1;
              puVar10 = (undefined1 *)*param_4;
              *puVar10 = 2;
              puVar10[1] = cVar5;
              puVar10[2] = uVar7;
              puVar10[3] = uVar18;
              *(undefined2 *)(puVar10 + 4) = 1;
              puVar10[6] = cVar5;
              puVar10[7] = 0;
              memcpy(puVar10 + 8,__src + 8,(ulong)(uVar13 - 8));
              *param_5 = uVar13;
              goto LAB_0027383c;
            }
          }
          else if ((uVar19 - 1 & 0xff) < 3) {
            uVar13 = uVar19 & 0xff;
            uVar17 = 0;
            if (uVar13 != 0) {
              uVar17 = (uVar16 & 0xff) / uVar13;
            }
            *__src = 2;
            __src[1] = cVar5;
            __src[2] = uVar7;
            __src[3] = uVar18;
            __src[4] = (char)uVar19;
            __src[5] = 0;
            __src[7] = 0;
            if ((uVar16 - uVar17 * uVar19 & 0xff) != 0) {
              uVar17 = uVar17 + 1;
            }
            uVar2 = uVar17 & 0xff;
            __src[6] = (char)uVar17;
            iVar4 = (uVar2 + (uVar17 & 0xff) * 0x10) * 4;
            uVar12 = iVar4 + 0x10;
            memcpy((void *)*param_4,__src,(ulong)uVar12);
            *param_5 = uVar12;
            if (1 < uVar13) {
              uVar16 = uVar16 - uVar17;
              uVar17 = uVar16 & 0xff;
              if (uVar2 <= (uVar16 & 0xff)) {
                uVar17 = uVar2;
              }
              uVar12 = iVar4 + 8;
              uVar14 = 1;
              do {
                puVar10 = __src + uVar12;
                *puVar10 = 2;
                puVar10[1] = cVar5;
                puVar10[2] = uVar7;
                puVar10[3] = uVar18;
                puVar10[7] = cVar5 - (char)uVar16;
                puVar10[4] = (char)uVar19;
                uVar2 = uVar17 * 0x44 + 8;
                puVar10[5] = (char)uVar14;
                puVar10[6] = (char)uVar17;
                memcpy((void *)param_4[uVar14],puVar10,(ulong)uVar2);
                uVar16 = uVar16 - uVar17;
                uVar12 = uVar12 + uVar17 * 0x44;
                param_5[uVar14] = uVar2;
                uVar14 = uVar14 + 1;
                uVar2 = uVar16 & 0xff;
                if (uVar17 <= (uVar16 & 0xff)) {
                  uVar2 = uVar17;
                }
                uVar17 = uVar2;
              } while (uVar14 < uVar13);
            }
            goto LAB_0027383c;
          }
          break;
        }
        bVar1 = 1 < (int)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
    }
    uVar19 = 0;
LAB_0027383c:
    FUN_002b4104(auStack_e0);
  }
  else {
    uVar19 = 0;
  }
  return uVar19;
}

