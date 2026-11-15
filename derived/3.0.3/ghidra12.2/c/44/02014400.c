
void FUN_02014400(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 float *param_6)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  long local_68;
  long local_60;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(param_5 + 0x5f88) != 0) {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_6);
    lVar7 = *(long *)puVar2;
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_6;
        fStack_4c = param_6[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar2 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_6);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
              local_48 = lVar7;
            }
          }
        }
        FUN_01ade370(&local_68,&local_58);
        lVar8 = local_60;
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar7 = 0;
        do {
          if (*(char *)(local_60 + lVar7) == '\0') {
LAB_02014580:
            iVar5 = (int)lVar7;
joined_r0x02014584:
            if (((1 < iVar5) && (*(char *)(lVar8 + (ulong)(iVar5 - 2)) == 'N')) &&
               (*(char *)((ulong)(iVar5 - 2) + lVar8 + 1) == 'S')) goto LAB_020145b8;
            break;
          }
          if (*(char *)(local_60 + lVar7 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02014580;
          }
          if (*(char *)(local_60 + lVar7 + 2) == '\0') {
            iVar5 = (int)lVar7 + 2;
            goto joined_r0x02014584;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        fVar9 = (float)FUN_0218dae0(DAT_053fbe30,param_5 + 0x5f48);
        *(float *)(param_5 + 0x610c) = fVar9;
        *(float *)(param_5 + 0x6110) = param_2;
        *(float *)(param_5 + 0x6114) = param_3;
        *(float *)(param_5 + 0x6118) = param_4;
        goto LAB_020145d4;
      }
    }
  }
LAB_020145b8:
  param_4 = 0.0;
  param_3 = 0.0;
  param_2 = 0.0;
  fVar9 = 0.0;
  *(undefined8 *)(param_5 + 0x610c) = 0;
  *(undefined8 *)(param_5 + 0x6114) = 0;
LAB_020145d4:
  fVar1 = *(float *)(param_5 + 0x60fc);
  if (*(float *)(param_5 + 0x60fc) <= fVar9) {
    fVar1 = fVar9;
  }
  fVar9 = *(float *)(param_5 + 0x6100);
  if (*(float *)(param_5 + 0x6100) <= param_2) {
    fVar9 = param_2;
  }
  local_58 = (undefined **)CONCAT44(fVar9,fVar1);
  local_50 = *(float *)(param_5 + 0x6104);
  if (*(float *)(param_5 + 0x6104) <= param_3) {
    local_50 = param_3;
  }
  fStack_4c = *(float *)(param_5 + 0x6108);
  if (*(float *)(param_5 + 0x6108) <= param_4) {
    fStack_4c = param_4;
  }
  if (*(long *)(param_5 + 0x1150) != 0) {
    uVar6 = 0xffffffffffff;
    if ((*(ulong **)(param_5 + 0x1180) != (ulong *)0x0) && (*(long *)(param_5 + 0x1160) != 0)) {
      uVar6 = **(ulong **)(param_5 + 0x1180);
    }
    if ((((((uint)(uVar6 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar6 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar6 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar4 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(param_5 + 0x1150) + 0x38) +
                         (-(uVar6 >> 0xf & 1) & 0xfffffffffff80000 | (uVar6 & 0xffff) << 3));
      (**(code **)(*plVar4 + 0x158))
                (plVar4,(int)(short)(uVar6 >> 0x10),(int)(short)(uVar6 >> 0x20),&local_58);
    }
  }
  return;
}

