
void FUN_0044d3e0(long *param_1,long *param_2,long param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long local_90;
  long lStack_88;
  ulong local_80 [2];
  undefined *local_70;
  undefined8 local_68;
  
  uVar8 = param_3 - (long)param_2;
  iVar1 = FUN_00426fc0(param_4);
  iVar6 = (int)(uVar8 >> 4);
  iVar7 = iVar1 * iVar6;
  if (0 < iVar6) {
    uVar5 = uVar8 >> 4 & 0xffffffff;
    uVar2 = uVar8 >> 4 & 1;
    if (uVar5 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      plVar4 = param_2 + 2;
      do {
        lVar3 = lVar3 + 2;
        iVar7 = iVar7 + ((int)plVar4[-1] - (int)plVar4[-2]) + ((int)plVar4[1] - (int)*plVar4) + 2;
        plVar4 = plVar4 + 4;
      } while (uVar5 - uVar2 != lVar3);
    }
    if (uVar2 != 0) {
      iVar7 = iVar7 + ((int)(param_2 + lVar3 * 2)[1] - (int)param_2[lVar3 * 2]) + 1;
    }
  }
  FUN_0044da90(param_1,uVar8 >> 4 & 0xffffffff,param_4,param_5 & 1,param_6,iVar7,local_80);
  if (0 < iVar6) {
    lVar3 = *param_1;
    uVar2 = 0;
    uVar5 = uVar8 >> 4 & 0xffffffff;
    uVar8 = local_80[0];
    do {
      uVar9 = uVar8 + (long)iVar1;
      if (local_80[0] + (long)iVar7 < uVar9) {
        local_80[1] = 0;
        local_68 = 0;
        local_70 = &DAT_0413df78;
        FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x1e
                     ,"hkLinearBuffer exhausted",local_80 + 1);
      }
      *(ulong *)(*(long *)(lVar3 + 0x20) + uVar2 * 8) = uVar8;
      uVar2 = uVar2 + 1;
      uVar8 = uVar9;
    } while (uVar5 != uVar2);
    if (0 < iVar6) {
      uVar8 = 0;
      do {
        local_90 = *param_2;
        lStack_88 = param_2[1];
        iVar1 = (int)(lStack_88 - local_90);
        uVar2 = uVar9 + ((lStack_88 - local_90 << 0x20) + 0x100000000 >> 0x20);
        if (local_80[0] + (long)iVar7 < uVar2) {
          local_80[1] = 0;
          local_68 = 0;
          local_70 = &DAT_0413df78;
          FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",
                       0x2f,"hkLinearBuffer exhausted",local_80 + 1);
          iVar1 = (int)lStack_88 - (int)local_90;
        }
        FUN_00429d00(&local_90,uVar9,iVar1 + 1,iVar1 + 1);
        *(ulong *)(*(long *)(lVar3 + 0x18) + uVar8 * 8) = uVar9;
        uVar8 = uVar8 + 1;
        param_2 = param_2 + 2;
        uVar9 = uVar2;
      } while (uVar5 != uVar8);
    }
  }
  return;
}

