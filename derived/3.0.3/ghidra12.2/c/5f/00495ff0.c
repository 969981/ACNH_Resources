
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00495ff0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  char *__s2;
  char *__s1;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  
  local_70 = param_2;
  plVar3 = (long *)FUN_00426e00(param_3,0x800000);
  if (plVar3 == (long *)0x0) {
    lVar8 = 0;
    sVar1 = _DAT_00000004;
  }
  else {
    lVar8 = *plVar3;
    sVar1 = *(short *)(lVar8 + 4);
  }
  if (sVar1 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      __s2 = (char *)FUN_00427b40(&local_70);
      local_78 = *(undefined8 *)(lVar8 + 8 + uVar5 * 8);
      __s1 = (char *)FUN_00427b40(&local_78);
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 == 0) {
        FUN_00429540(&local_68,local_78);
        if ((char *)0x1 < local_68) {
          local_80 = uVar6 | param_4 & 0xffffffff;
          local_68 = (char *)CONCAT44(local_68._4_4_,0xffffffff);
          iVar2 = FUN_0049bbd0(param_1 + 0x120,&local_80,&local_68);
          piVar7 = (int *)(*(long *)(param_1 + 0x120) + (long)iVar2 * 0xc + 8);
          if (*piVar7 < 0) {
            local_68 = __s2;
            lVar8 = FUN_0049b3d0(param_1 + 0x80,&local_68);
            *piVar7 = (int)((ulong)(lVar8 - *(long *)(param_1 + 0x80)) >> 3);
            if (*(char *)(param_1 + 0x290) != '\0') {
              lVar8 = FUN_00451730(param_1 + 0x2c8,param_3,&local_68);
              if ((char)local_68 != '\0') {
                uVar4 = *(uint *)(param_1 + 0x150);
                if (uVar4 == (*(uint *)(param_1 + 0x154) & 0x3fffffff)) {
                  FUN_00426990(PTR_DAT_048607b8,param_1 + 0x148,8);
                  uVar4 = *(uint *)(param_1 + 0x150);
                }
                *(ulong *)(*(long *)(param_1 + 0x148) + (long)(int)uVar4 * 8) =
                     param_4 & 0xffffffff | lVar8 << 0x20;
                *(uint *)(param_1 + 0x150) = uVar4 + 1;
              }
            }
          }
        }
        goto LAB_004960fc;
      }
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 + 0x100000000;
    } while ((long)uVar5 < (long)*(short *)(lVar8 + 4));
    uVar5 = 0xffffffff;
  }
LAB_004960fc:
  return uVar5 & 0xffffffff;
}

