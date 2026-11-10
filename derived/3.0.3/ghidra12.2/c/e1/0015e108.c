
int FUN_0015e108(undefined8 *param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  void *__src;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *local_70;
  ulong local_68;
  
  lVar6 = *param_2;
  plVar10 = (long *)*param_1;
  local_68 = 0;
  uVar2 = *(undefined4 *)((long)param_2 + (long)param_5 * 4 + 600);
  lVar9 = *(long *)(lVar6 + 0x1e8);
  __src = (void *)*plVar10;
  uVar11 = plVar10[2];
  sVar7 = uVar11;
  local_70 = plVar10;
  if ((((*(byte *)(param_2[0x88] + 0x84) & 1) != 0) || ((int)param_2[0x2f] == 2)) &&
     ((int)param_2[0x46] != 0x14)) {
    iVar4 = FUN_0015fda4(lVar6);
    if (iVar4 != 0) goto LAB_0015e288;
    if (0x3fff < uVar11) {
      sVar7 = 0x4000;
    }
    memcpy(*(void **)(lVar6 + 0x1158),__src,sVar7);
    __src = *(void **)(lVar6 + 0x1158);
  }
  iVar4 = FUN_0014d704(param_2,uVar2,__src,sVar7,&local_68);
  uVar3 = local_68;
  if (iVar4 == 0) {
    uVar8 = uVar11 - param_4;
    uVar1 = local_68;
    if (uVar8 <= local_68) {
      uVar1 = uVar8;
    }
    lVar5 = local_68 - uVar1;
    if (((*(byte *)(lVar6 + 0xf63) >> 2 & 1) != 0) &&
       (FUN_0014d550(lVar6,2,__src,uVar1), uVar8 < uVar3)) {
      FUN_0014d550(lVar6,4,(long)__src + uVar1,lVar5);
    }
    *param_3 = *param_3 + local_68;
    if (lVar9 == 0) {
      if (local_68 != uVar11) {
        return 0x37;
      }
      FUN_00166894(param_2);
    }
    else {
      *(long *)(lVar6 + 0x108) = *(long *)(lVar6 + 0x108) + lVar5;
      FUN_00146f3c(lVar6);
      if (uVar11 - local_68 != 0) {
        lVar5 = *plVar10;
        *(undefined8 *)(lVar9 + 0x1e8) = *(undefined8 *)(lVar6 + 0x1548);
        *(undefined8 *)(lVar9 + 0x1f0) = *(undefined8 *)(lVar6 + 0x1550);
        *(undefined8 *)(lVar9 + 0x1f8) = *(undefined8 *)(lVar9 + 0x10);
        *(undefined8 *)(lVar9 + 0x200) = *(undefined8 *)(lVar9 + 8);
        *(code **)(lVar6 + 0x1548) = FUN_0015e304;
        *(long **)(lVar6 + 0x1550) = param_2;
        *(ulong *)(lVar9 + 8) = uVar11 - local_68;
        *(ulong *)(lVar9 + 0x10) = lVar5 + local_68;
        *(long **)(lVar9 + 0x210) = plVar10;
        *(undefined4 *)(lVar9 + 0x208) = 1;
        return 0;
      }
      *(undefined4 *)(lVar9 + 0x208) = 2;
    }
  }
LAB_0015e288:
  FUN_0015e0d0(&local_70);
  return iVar4;
}

