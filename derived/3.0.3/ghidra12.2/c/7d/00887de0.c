
void FUN_00887de0(long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int *piVar10;
  char cVar11;
  undefined4 local_64;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  local_64 = FUN_006bd550(param_3[1],0);
  puVar5 = (uint *)FUN_0088c0d0(param_2 + 8,&local_64);
  __s = PTR_DAT_04bb3250;
  puVar4 = PTR_DAT_04bb3248;
  if (puVar5 == (uint *)0x0) {
    puVar8 = &DAT_0407ebb1;
  }
  else {
    if (*puVar5 != 0) {
      cVar11 = *PTR_DAT_04bb3248;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *puVar4 = 1;
          memset(__s,0xff,0x288);
        }
        else {
          uVar3 = *(uint *)(__s + 0x14c);
          if (-1 < (int)uVar3) {
            puVar7 = (undefined8 *)((ulong)uVar3 + (long)puVar5);
            goto LAB_00887f1c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar5;
        puVar7 = (undefined8 *)0x0;
        if ((*puVar5 == 0) || (puVar5 == puVar9)) goto LAB_00887f1c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(__s + 0x14c) = 0xfffffffe;
        puVar7 = (undefined8 *)0x0;
        if (uVar6 == 0) goto LAB_00887f1c;
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x44991235) {
          piVar10 = piVar10 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            puVar7 = (undefined8 *)0x0;
            goto LAB_00887f1c;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(__s + 0x14c) = iVar1;
      } while (*puVar5 != 0);
    }
    puVar7 = (undefined8 *)0x0;
LAB_00887f1c:
    puVar8 = *(undefined8 **)PTR_PTR_04bb3270;
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = puVar7;
    }
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar8;
  return;
}

