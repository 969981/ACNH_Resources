
uint FUN_0087b260(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  char cVar12;
  undefined4 local_88 [2];
  long local_80;
  undefined *local_78;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = (undefined2)param_3;
  local_64 = 5;
  local_66 = (undefined1)param_4;
  local_65 = (undefined1)param_5;
  local_62 = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar5 = FUN_006bd550(param_2[1],0);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar5);
  puVar7 = (uint *)FUN_0088c0d0(param_1 + 8,&local_78);
  __s = PTR_DAT_04bb3250;
  puVar4 = PTR_DAT_04bb3248;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  if (puVar7 == (uint *)0x0) {
    FUN_0087a0f0(local_88,param_1,param_2,&local_68);
  }
  else {
    if (*puVar7 != 0) {
      cVar12 = *PTR_DAT_04bb3248;
      do {
        if (cVar12 == '\0') {
          *puVar4 = 1;
          memset(__s,0xff,0x288);
          cVar12 = '\x01';
        }
        else {
          uVar6 = *(uint *)(__s + 0x148);
          if (-1 < (int)uVar6) {
            lVar9 = (ulong)uVar6 + (long)puVar7;
            goto LAB_0087b40c;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        lVar9 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0087b40c;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar9 - (long)puVar11);
        if (lVar1 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(__s + 0x148) = 0xfffffffe;
        lVar9 = 0;
        if (uVar8 == 0) goto LAB_0087b40c;
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != 0x443c0fb7) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            lVar9 = 0;
            goto LAB_0087b40c;
          }
        }
        iVar2 = 0;
        if (*piVar10 != -1) {
          iVar2 = *piVar10;
        }
        *(int *)(__s + 0x148) = iVar2;
      } while (*puVar7 != 0);
    }
    lVar9 = 0;
LAB_0087b40c:
    local_80 = *(long *)PTR_PTR_04bb3260;
    if (lVar9 != 0) {
      local_80 = lVar9;
    }
  }
  local_70 = local_80;
  uVar8 = FUN_00879630(param_1,&local_78,0);
  uVar6 = 0;
  if ((uVar8 & 1) == 0) goto LAB_0087b53c;
  uVar8 = FUN_0087af00(param_1,param_2);
  if ((uVar8 & 1) == 0) {
LAB_0087b520:
    uVar6 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_88[0] = FUN_006bd550(param_2[1],0);
    puVar7 = (uint *)FUN_0088c0d0(param_1 + 8,local_88);
    uVar6 = 0;
    if (puVar7 == (uint *)0x0) goto LAB_0087b53c;
    uVar6 = *puVar7;
    if ((uVar6 != 0) && (puVar7 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if ((*puVar11 != 0) && ((uVar6 = puVar11[1], uVar6 != 0 && ((ulong)(ushort)puVar11[2] != 0))))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar9 != 0) {
          uVar3 = 0;
          if ((ulong)uVar6 != 0) {
            uVar3 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar6);
          }
          if (*puVar11 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_04ce9768) && (*(short *)(DAT_04ce9770 + (long)(int)uVar3 * 2) == 4))
          goto LAB_0087b520;
        }
      }
    }
    uVar6 = FUN_00875530(param_1,puVar7,param_3,param_4,param_5);
  }
LAB_0087b53c:
  return uVar6 & 1;
}

