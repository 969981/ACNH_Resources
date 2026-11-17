
void FUN_02a5eb28(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_40;
  float local_38;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_04c93e08 == 0) {
    return;
  }
  uVar5 = *param_2;
  if ((((uVar5 == 0) ||
       (lVar8 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                         ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar8 == 0)) ||
      ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar8 + 0x230) != uVar5)) {
    lVar8 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar6 = DAT_04c93e08;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar5 = 1;
      goto joined_r0x02a5ebe8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02a5ebe8;
    }
  }
  uVar5 = 0;
joined_r0x02a5ebe8:
  if (lVar8 != 0) {
    uVar5 = uVar5 ^ 1;
    if (*(int *)(lVar8 + 0x150) != 1) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      local_40 = *(undefined8 *)(*(long *)(lVar8 + 0x68) + 0x278);
      local_38 = *(float *)(*(long *)(lVar8 + 0x68) + 0x280);
      lVar6 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + 0xa8), lVar7 != 0)) &&
         ((uVar5 = (int)((float)(int)(float)local_40 / 5.0) - (uint)((float)local_40 < 0.0),
          -1 < (int)uVar5 &&
          ((uVar1 = (int)((float)(int)local_38 / 5.0) - (uint)(local_38 < 0.0), -1 < (int)uVar1 &&
           (uVar5 < *(uint *)(lVar7 + 0x38) && uVar1 < *(uint *)(lVar7 + 0x3c))))))) {
        uVar5 = uVar5 + *(uint *)(lVar7 + 0x38) * uVar1;
        if ((uVar5 < *(uint *)(lVar7 + 0x68) && *(long *)(lVar7 + 0x70) != 0) &&
           (local_14 = 3, (*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar5 * 4) >> 3 & 1) != 0)
           ) {
          local_18 = 0;
          FUN_0093b024(lVar6 + 0x28,&local_40,&local_18);
          local_14 = local_18;
          lVar6 = FUN_009807cc(DAT_04cfab78 + 8,local_18);
          if ((((lVar6 != 0) &&
               (pcVar4 = (char *)FUN_009823a0(lVar6,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
               pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) &&
             (0.0 < *(float *)(*(long *)(lVar8 + 0x68) + 0x2dc))) {
            **(undefined1 **)(param_1 + 0x10) = 1;
          }
        }
      }
    }
  }
  return;
}

