
/* WARNING: Removing unreachable block (ram,0x01a1fd68) */

undefined4 FUN_01a1fd20(float *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(long *)PTR_DAT_04bb2200 == 0) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
  if (lVar5 == 0) {
    return 0;
  }
  local_24 = 0;
  if (*(long *)(lVar5 + 0x118) == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c8;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0xa8);
    bVar3 = true;
    if ((lVar6 != 0) &&
       (uVar1 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0), -1 < (int)uVar1)) {
      uVar2 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
      bVar3 = true;
      if ((-1 < (int)uVar2) && (uVar1 < *(uint *)(lVar6 + 0x38) && uVar2 < *(uint *)(lVar6 + 0x3c)))
      {
        uVar1 = uVar1 + *(uint *)(lVar6 + 0x38) * uVar2;
        if (uVar1 < *(uint *)(lVar6 + 0x68) && *(long *)(lVar6 + 0x70) != 0) {
          local_24 = 3;
          bVar3 = (*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar1 * 4) >> 3 & 1) == 0;
        }
        else {
          bVar3 = true;
        }
      }
    }
    local_28 = 0;
    if ((!bVar3) || ((param_2 & 1) == 0)) {
      if ((lVar6 != 0) && (*(char *)(lVar5 + 0x11c8) == '\0')) {
        uVar7 = FUN_0093a950(lVar5 + 0x28,param_1,&local_28);
        goto LAB_01a1fe80;
      }
    }
    else if ((lVar6 != 0) && (*(char *)(lVar5 + 0x11c8) == '\0')) {
      uVar7 = FUN_0093b024(lVar5 + 0x28,param_1,&local_28);
      goto LAB_01a1fe80;
    }
  }
  local_28 = 0;
  uVar7 = 0xc3fa0000;
LAB_01a1fe80:
  local_24 = local_28;
  lVar5 = FUN_009807cc(DAT_04cfab78 + 8,local_28);
  if (((lVar5 != 0) &&
      (pcVar4 = (char *)FUN_009823a0(lVar5,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
      pcVar4 != (char *)0x0)) && (*pcVar4 != '\0')) {
    uVar7 = FUN_015cb8d4(param_1,0);
  }
  return uVar7;
}

