
undefined8 FUN_01db1600(long param_1,byte *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  ulong uVar16;
  undefined4 *__src;
  int iVar17;
  ulong uVar18;
  undefined4 *__src_00;
  long *plVar19;
  undefined4 local_70;
  char local_6c;
  undefined1 local_6b;
  char local_6a;
  byte local_68 [4];
  undefined4 local_64;
  
  *param_3 = 1;
  if (*(int *)(param_1 + 0xa8) != 0) {
    __src_00 = *(undefined4 **)(param_1 + 0xa0);
    do {
      cVar10 = *(char *)(__src_00 + 2);
      cVar11 = *(char *)((long)__src_00 + 10);
      uVar6 = *__src_00;
      uVar7 = __src_00[1];
      uVar12 = *(undefined1 *)((long)__src_00 + 0xb);
      uVar8 = __src_00[3];
      if ((cVar10 == '\x02') && (*(int *)(param_1 + 0x9c) == 1)) {
        uVar8 = uVar8 + 0x10;
        if (0x20000 - *(uint *)(param_1 + 0x90) < uVar8) {
          return 0;
        }
        memcpy((void *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90)),__src_00,
               (ulong)uVar8);
        *(uint *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + uVar8;
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        __src_00 = (undefined4 *)(*(long *)(param_1 + 0xa0) + (ulong)uVar8);
      }
      else {
        uVar13 = *(undefined1 *)((long)__src_00 + 9);
        param_3[1] = uVar6;
        param_3[2] = uVar8;
        memcpy(param_3 + 3,__src_00 + 4,(ulong)uVar8);
        local_70 = uVar7;
        local_6c = cVar10;
        local_6b = uVar13;
        local_6a = cVar11;
        uVar16 = FUN_01db0cc0(&local_70);
        iVar17 = *(int *)(param_1 + 0x9c);
        if ((cVar10 == '\x03') && (iVar17 == 2)) {
          bVar14 = *(byte *)(param_1 + 0x99);
          if ((long)(char)bVar14 == 0xffffffffffffffff) {
LAB_01db1778:
            uVar18 = 0;
          }
          else {
            pbVar4 = (byte *)(**(long **)PTR_DAT_04bb27d0 + 0x48) +
                     ((long)(char)bVar14 & 0xffffffffU) * 0x80;
            if (7 < bVar14) {
              pbVar4 = (byte *)(**(long **)PTR_DAT_04bb27d0 + 0x48);
            }
            if ((*pbVar4 & 1) == 0) goto LAB_01db1778;
            uVar18 = (ulong)*(uint *)(pbVar4 + 0x7c);
          }
          uVar16 = uVar16 & (uVar18 ^ 0xffffffffffffffff);
        }
        bVar14 = *param_2;
        if ((ulong)bVar14 < 8) {
          bVar15 = *(byte *)(*DAT_0537d558 + (ulong)bVar14 * 4 + 0x44e);
          if ((long)(char)bVar15 != 0xffffffffffffffff) {
            puVar2 = (uint *)(*DAT_0537d558 + 0x48);
            puVar5 = puVar2 + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
            if (7 < bVar15) {
              puVar5 = puVar2;
            }
            if ((uVar16 != 0) && ((*puVar5 >> 1 & 1) != 0)) {
              local_68[0] = bVar14;
              uVar16 = FUN_01cab2e0(*(undefined8 *)PTR_DAT_04bc10a8,uVar16,param_3,uVar8 + 0xc,
                                    local_68,cVar11 == '\0');
              if ((uVar16 & 1) == 0) {
                return 0;
              }
              iVar17 = *(int *)(param_1 + 0x9c);
            }
          }
        }
        __src_00 = (undefined4 *)((long)(__src_00 + 4) + (ulong)uVar8);
        if ((cVar10 == '\x03') && (iVar17 == 2)) {
          uVar13 = *(undefined1 *)(param_1 + 0x99);
          uVar1 = uVar8 + 0x10;
          __src = (undefined4 *)((long)__src_00 - (ulong)uVar1);
          *__src = uVar6;
          __src[1] = uVar7;
          *(undefined1 *)(__src + 2) = 4;
          *(char *)((long)__src + 10) = cVar11;
          *(undefined1 *)((long)__src + 0xb) = uVar12;
          __src[3] = uVar8;
          *(undefined1 *)((long)__src + 9) = uVar13;
          if (0x20000 - *(uint *)(param_1 + 0x90) < uVar1) {
            local_64 = 0x2a;
            if ((*(int *)(DAT_05358908 + 0x38) != 0) && (*(char *)(DAT_05358908 + 0xfd8) == '\0')) {
              plVar19 = *(long **)(DAT_05ae6a60 + 0x30);
              uVar16 = (**(code **)(*plVar19 + 0x10))(plVar19);
              if (((uVar16 & 1) == 0) &&
                 (uVar16 = (**(code **)(*plVar19 + 0x18))(plVar19), (uVar16 & 1) == 0)) {
                FUN_0387de70(plVar19,&DAT_05b03f00,0xe,0x14,0x2a);
              }
            }
          }
          else {
            memcpy((void *)(*(long *)(param_1 + 0x88) + (ulong)*(uint *)(param_1 + 0x90)),__src,
                   (ulong)uVar1);
            *(uint *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + uVar1;
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          }
        }
      }
      *(undefined4 **)(param_1 + 0xa0) = __src_00;
      iVar17 = *(int *)(param_1 + 0xa8) + -1;
      *(int *)(param_1 + 0xa8) = iVar17;
    } while (iVar17 != 0);
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = 0;
    iVar17 = *(int *)(param_1 + 0x38);
    iVar9 = *(int *)(param_1 + 0x30);
    if (iVar17 < iVar9) {
      *(int *)(param_1 + 0x38) = iVar17 + 1;
      iVar17 = *(int *)(param_1 + 0x34) + iVar17;
      iVar3 = 0;
      if (iVar9 <= iVar17) {
        iVar3 = iVar9;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)(iVar17 - iVar3) * 8) =
           *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return 1;
}

