
long FUN_004a07b0(int *param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  byte *local_98;
  undefined1 local_90 [16];
  long local_80 [8];
  byte *local_38;
  
  if ((param_2 == (byte *)0x0) || (*param_1 < 0)) {
    lVar6 = 0;
  }
  else {
    local_38 = param_2;
    if ((*(char *)((long)param_1 + 6) == '\0') &&
       (uVar2 = FUN_004274f0(param_2), (uVar2 >> 9 & 1) != 0)) {
      if (1 < DAT_04c71310) {
        FUN_00444bc0(local_80,&DAT_04c712c0,2);
        local_90 = FUN_004273b0(local_38);
        local_98 = local_38;
        lVar6 = FUN_004446b0(local_80,"Cannot copy {}@{}, it is not retargetable",PTR_DAT_04bd4eb8,
                             local_90,&local_98);
        *(char **)(lVar6 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Builder/hkTypeCopier.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x30) = 0x146;
        FUN_00444c00(local_80);
      }
      lVar6 = 0;
      *param_1 = -0x7ffbfe00;
    }
    else {
      local_80[0] = 0;
      uVar2 = FUN_004a09f0(param_1 + 6,&local_38,local_80);
      pbVar1 = local_38;
      lVar6 = *(long *)(*(long *)(param_1 + 6) + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
      if (lVar6 == 0) {
        lVar7 = (long)(int)uVar2;
        uVar4 = FUN_00428440(local_38);
        if (((pbVar1 == (byte *)0x0) || ((uVar4 & 0x1f) != 1)) ||
           (iVar3 = FUN_00426fc0(pbVar1), iVar3 == 0)) {
          if (((*local_38 >> 3 & 1) == 0) ||
             (plVar5 = (long *)FUN_00426db0(local_38,8), plVar5 == (long *)0x0)) {
            local_80[0] = 0;
          }
          else {
            local_80[0] = *plVar5;
            if (local_80[0] != 0) {
              lVar6 = FUN_004a1520(param_1 + 0xe,local_80);
              if ((lVar6 != 0) &&
                 (lVar6 = *(long *)(*(long *)(param_1 + 0xe) + (long)*(int *)(lVar6 + 4) * 0x10 + 8)
                 , lVar6 != 0)) {
                *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar6;
                return lVar6;
              }
            }
          }
          lVar6 = FUN_004a0a90(param_1,local_38);
          *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar6;
          FUN_004a0da0(param_1,lVar6,local_38,param_3);
          pbVar1 = local_38;
          uVar2 = *(uint *)(param_3 + 1);
          if (uVar2 == (*(uint *)((long)param_3 + 0xc) & 0x3fffffff)) {
            FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d28,param_3,0x10);
            uVar2 = *(uint *)(param_3 + 1);
          }
          plVar5 = (long *)(*param_3 + (long)(int)uVar2 * 0x10);
          *plVar5 = lVar6;
          plVar5[1] = (long)pbVar1;
          *(uint *)(param_3 + 1) = uVar2 + 1;
        }
        else {
          lVar6 = FUN_004a07b0(param_1,PTR_DAT_04bd8010,param_3);
          *(long *)(*(long *)(param_1 + 6) + lVar7 * 0x10 + 8) = lVar6;
        }
      }
    }
  }
  return lVar6;
}

