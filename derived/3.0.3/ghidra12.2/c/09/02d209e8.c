
void FUN_02d209e8(long param_1,short *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  short sVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 uVar15;
  
  if (*param_2 != -2) {
    *(int *)(param_1 + 0x1c220) = *(int *)(param_1 + 0x1c20c);
    *(short *)(param_1 + 0x1c550) = *param_2;
    *(char *)(param_1 + 0x1c552) = (char)param_2[1];
    *(undefined1 *)(param_1 + 0x1c553) = *(undefined1 *)((long)param_2 + 3);
    pcVar1 = (char *)(param_1 + 0x56f16);
    *(undefined4 *)(param_1 + 0x1c554) = *(undefined4 *)(param_2 + 2);
    *pcVar1 = '\x01';
    if (((((*(int *)(param_1 + 0x1c210) != *(int *)(param_1 + 0x1c24c)) ||
          (*(int *)(param_1 + 0x1c214) != *(int *)(param_1 + 0x1c250))) ||
         (*(int *)(param_1 + 0x1c218) != *(int *)(param_1 + 0x1c254))) ||
        ((*(int *)(param_1 + 0x1c21c) != *(int *)(param_1 + 0x1c258) ||
         (*(int *)(param_1 + 0x1c20c) != *(int *)(param_1 + 0x1c25c))))) ||
       ((uVar13 = FUN_0277d7b4(param_1 + 0x1c548,(short *)(param_1 + 0x1c550)), (uVar13 & 1) == 0 ||
        ((*(char *)(param_1 + 0x1c54b) != *(char *)(param_1 + 0x1c553) ||
         (*(int *)(param_1 + 0x1c54c) != *(int *)(param_1 + 0x1c554))))))) {
      *pcVar1 = '\0';
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x228) + 0x578);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x140))(plVar14,*pcVar1 == '\0',0);
    }
  }
  lVar12 = DAT_05635578;
  uVar3 = *(uint *)(param_1 + 0x1c218);
  uVar4 = *(uint *)(param_1 + 0x1c21c);
  uVar5 = *(uint *)(param_1 + 0x1c214);
  if (*(uint *)(param_1 + 0x1c508) <= uVar4) {
    uVar4 = 0;
  }
  if (*(uint *)(param_1 + 0x1c518) <= uVar5) {
    uVar5 = 0;
  }
  if (*(uint *)(param_1 + 0x1c528) <= uVar3) {
    uVar3 = 0;
  }
  sVar11 = *(short *)PTR_DAT_04bb6298;
  if (sVar11 != -1) {
    uVar8 = *(undefined2 *)(param_1 + 0x1c550);
    uVar6 = *(undefined1 *)(param_1 + 0x1c552);
    uVar7 = *(undefined1 *)(param_1 + 0x1c553);
    uVar9 = *(undefined2 *)(*(long *)(param_1 + 0x1c520) + (long)(int)uVar5 * 2);
    uVar10 = *(undefined2 *)(*(long *)(param_1 + 0x1c530) + (long)(int)uVar3 * 2);
    uVar15 = *(undefined4 *)(param_1 + 0x1c554);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8;
    if (0xff < (uint)(int)sVar11) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      *(undefined2 *)(DAT_05635578 + 0x26d0) =
           *(undefined2 *)(*(long *)(param_1 + 0x1c510) + (long)(int)uVar4 * 2);
      *(undefined2 *)(lVar12 + 0x26d2) = uVar9;
      *(undefined2 *)(lVar12 + 0x26d4) = uVar10;
      *(undefined2 *)(lVar12 + 0x26d8) = uVar8;
      *(undefined1 *)(lVar12 + 0x26da) = uVar6;
      *(undefined1 *)(lVar12 + 0x26db) = uVar7;
      goto LAB_02d20c08;
    }
  }
  *(undefined4 *)(DAT_05635578 + 0x26d0) = 0xffffffff;
  *(undefined2 *)(lVar12 + 0x26d4) = 0xffff;
  *(undefined2 *)(lVar12 + 0x26d8) = DAT_05586008;
  *(undefined1 *)(lVar12 + 0x26da) = DAT_0558600a;
  *(undefined1 *)(lVar12 + 0x26db) = DAT_0558600b;
  uVar15 = DAT_0558600c;
LAB_02d20c08:
  *(undefined4 *)(lVar12 + 0x26dc) = uVar15;
  return;
}

