
void FUN_02013f40(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 float *param_6)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*(int *)(param_5 + 0x5f88) != 0) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_6);
    lVar8 = *(long *)puVar1;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_6;
        fStack_4c = param_6[1];
        local_58 = PTR_DAT_04bc0510 + 0x10;
        uVar3 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_6);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
              local_48 = lVar8;
            }
          }
        }
        FUN_01ade370(&local_68,&local_58);
        lVar9 = local_60;
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar2 = local_60;
        lVar8 = 0;
        do {
          if (*(char *)(local_60 + lVar8) == '\0') {
LAB_02014100:
            iVar6 = (int)lVar8;
joined_r0x02014104:
            if ((0 < iVar6) && (*(char *)(lVar9 + (ulong)(iVar6 - 1)) == 'H')) goto LAB_02014228;
            break;
          }
          if (*(char *)(local_60 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02014100;
          }
          if (*(char *)(local_60 + lVar8 + 2) == '\0') {
            iVar6 = (int)lVar8 + 2;
            goto joined_r0x02014104;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar9 = local_60;
        lVar8 = 0;
        do {
          if (*(char *)(local_60 + lVar8) == '\0') {
LAB_02014170:
            iVar6 = (int)lVar8;
joined_r0x02014174:
            if (((1 < iVar6) && (*(char *)(lVar2 + (ulong)(iVar6 - 2)) == 'H')) &&
               (*(char *)((ulong)(iVar6 - 2) + lVar2 + 1) == 'F')) goto LAB_02014228;
            break;
          }
          if (*(char *)(local_60 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02014170;
          }
          if (*(char *)(local_60 + lVar8 + 2) == '\0') {
            iVar6 = (int)lVar8 + 2;
            goto joined_r0x02014174;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar2 = local_60;
        lVar8 = 0;
        do {
          if (*(char *)(local_60 + lVar8) == '\0') {
LAB_020141f0:
            iVar6 = (int)lVar8;
joined_r0x020141f4:
            if (((1 < iVar6) && (*(char *)(lVar9 + (ulong)(iVar6 - 2)) == 'H')) &&
               (*(char *)((ulong)(iVar6 - 2) + lVar9 + 1) == 'M')) goto LAB_02014228;
            break;
          }
          if (*(char *)(local_60 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_020141f0;
          }
          if (*(char *)(local_60 + lVar8 + 2) == '\0') {
            iVar6 = (int)lVar8 + 2;
            goto joined_r0x020141f4;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar8 = 0;
        do {
          if (*(char *)(local_60 + lVar8) == '\0') {
LAB_020142a8:
            if ((0 < (int)lVar8) && (*(char *)(lVar2 + (ulong)((int)lVar8 - 1)) == 'L')) {
              uVar4 = *(undefined8 *)PTR_DAT_04bb4888;
              puStack_70 = &DAT_040a127f;
              goto LAB_0201430c;
            }
            break;
          }
          if (*(char *)(local_60 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_020142a8;
          }
          if (*(char *)(local_60 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_020142a8;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        uVar4 = *(undefined8 *)PTR_DAT_04bb4888;
        puStack_70 = &DAT_040e7ed4;
        goto LAB_0201430c;
      }
    }
    param_4 = 0.0;
    param_3 = 0.0;
    param_2 = 0.0;
    fVar10 = 0.0;
    *(undefined8 *)(param_5 + 0x60fc) = 0;
    *(undefined8 *)(param_5 + 0x6104) = 0;
    goto LAB_0201432c;
  }
  fVar10 = (float)FUN_021d1d40(*(undefined8 *)PTR_DAT_04bb4880,param_5 + 0x5f48,param_6);
  goto LAB_0201431c;
LAB_02014228:
  uVar4 = *(undefined8 *)PTR_DAT_04bb4888;
  puStack_70 = &DAT_0406d591;
LAB_0201430c:
  local_78 = PTR_DAT_04bb2020 + 0x10;
  fVar10 = (float)FUN_0218cfa0(uVar4,param_5 + 0x5f48,&local_78);
LAB_0201431c:
  *(float *)(param_5 + 0x60fc) = fVar10;
  *(float *)(param_5 + 0x6100) = param_2;
  *(float *)(param_5 + 0x6104) = param_3;
  *(float *)(param_5 + 0x6108) = param_4;
LAB_0201432c:
  if (fVar10 <= *(float *)(param_5 + 0x610c)) {
    fVar10 = *(float *)(param_5 + 0x610c);
  }
  if (param_2 <= *(float *)(param_5 + 0x6110)) {
    param_2 = *(float *)(param_5 + 0x6110);
  }
  local_58 = (undefined *)CONCAT44(param_2,fVar10);
  local_50 = param_3;
  if (param_3 <= *(float *)(param_5 + 0x6114)) {
    local_50 = *(float *)(param_5 + 0x6114);
  }
  fStack_4c = param_4;
  if (param_4 <= *(float *)(param_5 + 0x6118)) {
    fStack_4c = *(float *)(param_5 + 0x6118);
  }
  if (*(long *)(param_5 + 0x1150) != 0) {
    uVar7 = 0xffffffffffff;
    if ((*(ulong **)(param_5 + 0x1180) != (ulong *)0x0) && (*(long *)(param_5 + 0x1160) != 0)) {
      uVar7 = **(ulong **)(param_5 + 0x1180);
    }
    if ((((((uint)(uVar7 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
        ((((uint)uVar7 ^ 0xffffffff) & 0xffff) != 0)) &&
       ((((uint)(uVar7 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
      plVar5 = (long *)**(undefined8 **)
                         (*(long *)(*(long *)(param_5 + 0x1150) + 0x38) +
                         (-(uVar7 >> 0xf & 1) & 0xfffffffffff80000 | (uVar7 & 0xffff) << 3));
      (**(code **)(*plVar5 + 0x158))
                (plVar5,(int)(short)(uVar7 >> 0x10),(int)(short)(uVar7 >> 0x20),&local_58);
    }
  }
  return;
}

