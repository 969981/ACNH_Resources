
void FUN_0399e3d0(long *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  puVar2 = PTR_DAT_04bbdb78;
  lVar9 = param_1[0x42];
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x7f8) != '\0')) {
    lVar8 = *(long *)(lVar9 + 0x1d8);
    if (lVar8 != 0 && 0 < *(int *)(lVar9 + 0x1e0) || *(char *)(lVar9 + 0x920) != '\0') {
      lVar6 = *(long *)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x18) + 0x680);
      fVar11 = *(float *)(lVar6 + 0x18);
      fVar10 = *(float *)(lVar6 + 0x1c);
      fVar13 = *(float *)(lVar6 + 0x10);
      fVar12 = *(float *)(lVar6 + 0x14);
      *(undefined4 *)(lVar9 + 0x7e0) = 0x1d;
      iVar7 = (int)(fVar10 - fVar12);
      *(int *)(lVar9 + 0x7e8) = iVar7;
      iVar5 = (int)(fVar11 - fVar13);
      *(int *)(lVar9 + 0x7f0) = iVar7;
      *(int *)(lVar9 + 0x7e4) = iVar5;
      *(int *)(lVar9 + 0x7ec) = iVar5;
      if (*(char *)(lVar9 + 0x920) != '\0') {
        (**(code **)(*(long *)(lVar9 + 0x858) + 0x60))(lVar9 + 0x858,lVar9 + 0x7e0);
        lVar8 = *(long *)(lVar9 + 0x1d8);
      }
      for (; lVar8 != lVar9 + 0x1d0; lVar8 = *(long *)(lVar8 + 8)) {
        plVar3 = *(long **)(lVar8 + 0x10);
        if ((char)plVar3[0x19] != '\0') {
          (**(code **)(*plVar3 + 0x60))(plVar3,lVar9 + 0x7e0);
        }
      }
    }
  }
  if ((*(char *)((long)param_1 + 0x202) == '\0') || (param_1[0x44] != 0)) goto LAB_0399e588;
  uVar4 = (undefined2)param_1[0x40];
  uVar1 = *(ushort *)((long)param_1 + 0xa74);
  local_48 = (float)*(int *)((long)param_1 + 0x204);
  fStack_44 = (float)(int)param_1[0x41];
  if ((uVar1 >> 7 & 1) == 0) {
LAB_0399e4f8:
    if ((uVar1 >> 8 & 1) == 0) goto LAB_0399e4fc;
LAB_0399e518:
    fStack_4c = *(float *)((long)param_1 + 100) - *(float *)((long)param_1 + 0x5c);
    local_50 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xb);
    fVar11 = local_50;
    fVar10 = fStack_4c;
    if (1 < (int)param_1[0xd] - 1U) {
      fVar11 = fStack_4c;
      fVar10 = local_50;
    }
    lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0x18) + 0x680);
    local_48 = (fVar10 / *(float *)(lVar9 + 8)) *
               (*(float *)(lVar9 + 0x18) - *(float *)(lVar9 + 0x10));
    fStack_44 = (fVar11 / *(float *)(lVar9 + 0xc)) *
                (*(float *)(lVar9 + 0x1c) - *(float *)(lVar9 + 0x14));
  }
  else {
    if (param_2 != 0) {
      uVar4 = *(undefined2 *)(*(long *)(param_2 + 0x20) + 0xa0);
      goto LAB_0399e4f8;
    }
    uVar4 = 0x1d;
    if ((uVar1 >> 8 & 1) != 0) goto LAB_0399e518;
LAB_0399e4fc:
    fStack_4c = *(float *)((long)param_1 + 100) - *(float *)((long)param_1 + 0x5c);
    local_50 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xb);
  }
  FUN_039a74a0(param_1 + 0x6c,&local_48,&local_50,uVar4);
LAB_0399e588:
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

