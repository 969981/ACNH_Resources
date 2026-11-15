
void FUN_0234c3d4(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  
  lVar6 = *(long *)(param_1 + 0x1150);
  local_30 = *param_2;
  if (*param_2 <= *param_3) {
    local_30 = *param_3;
  }
  fStack_2c = param_2[1];
  if (param_2[1] <= param_3[1]) {
    fStack_2c = param_3[1];
  }
  local_28 = param_2[2];
  if (param_2[2] <= param_3[2]) {
    local_28 = param_3[2];
  }
  fStack_24 = param_2[3];
  if (param_2[3] <= param_3[3]) {
    fStack_24 = param_3[3];
  }
  if (lVar6 != 0) {
    lVar3 = *(long *)(param_1 + 0x1180);
    uVar5 = 0xffffffffffff;
    lVar4 = *(long *)(param_1 + 0x1160);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      lVar1 = 0x60;
      if (*(uint *)(param_1 + 0x1178) < 0xd) {
        lVar1 = 0;
      }
      uVar5 = *(ulong *)(lVar3 + lVar1);
    }
    if ((((((uint)(uVar5 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar5 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar5 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar2 = (long *)**(undefined8 **)
                         (*(long *)(lVar6 + 0x38) +
                         (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
      (**(code **)(*plVar2 + 0x158))
                (plVar2,(int)(short)(uVar5 >> 0x10),(int)(short)(uVar5 >> 0x20),&local_30);
      lVar3 = *(long *)(param_1 + 0x1180);
      lVar4 = *(long *)(param_1 + 0x1160);
    }
    uVar5 = 0xffffffffffff;
    if ((lVar3 != 0) && (lVar4 != 0)) {
      lVar4 = 0x68;
      if (*(uint *)(param_1 + 0x1178) < 0xe) {
        lVar4 = 0;
      }
      uVar5 = *(ulong *)(lVar3 + lVar4);
    }
    if ((((((uint)(uVar5 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar5 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar5 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar2 = (long *)**(undefined8 **)
                         (*(long *)(lVar6 + 0x38) +
                         (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
      (**(code **)(*plVar2 + 0x158))
                (plVar2,(int)(short)(uVar5 >> 0x10),(int)(short)(uVar5 >> 0x20),&local_30);
    }
  }
  return;
}

