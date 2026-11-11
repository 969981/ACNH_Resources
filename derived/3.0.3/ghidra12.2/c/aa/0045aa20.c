
void FUN_0045aa20(undefined8 *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 local_b8 [16];
  undefined1 auStack_a8 [64];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  uVar12 = *param_2;
  uVar11 = param_2[2];
  if ((uVar11 & 1) != 0) {
    FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
  }
  local_68 = *param_3;
  local_60 = param_3[1];
  local_58 = param_3[2];
  if ((local_58 & 1) != 0) {
    FUN_0043dd30(local_58 & 0xfffffffffffffffe);
  }
  iVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,&local_68);
  if (iVar2 < 0) {
    if ((local_68 != 0) && (local_60 != 0)) {
      uVar5 = FUN_0044f8a0(local_60,&DAT_04c16210);
      uVar8 = local_68;
      if (((uVar5 & 1) == 0) || (local_68 == 0)) goto LAB_0045ab5c;
      if (*(char *)((long)param_1 + 0xc) == '\0') {
        if (1 < DAT_04c70110) {
          FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
          local_b8 = FUN_004273b0(uVar8);
          lVar6 = FUN_004446b0(auStack_a8,"Cannot find native type for {} (unregistered type?)",
                               &DAT_048616a0,local_b8);
          uVar10 = 0x26f;
          goto LAB_0045b08c;
        }
        goto LAB_0045b098;
      }
      if (3 < DAT_04c70110) {
        FUN_00444bc0(auStack_a8,&DAT_04c700c0,4);
        local_b8 = FUN_004273b0(uVar8);
        lVar6 = FUN_004446b0(auStack_a8,"Skipping type {} (callback returned failure)",&DAT_048616a0
                             ,local_b8);
        uVar10 = 0x271;
        goto LAB_0045ac28;
      }
LAB_0045ac34:
      uVar8 = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      if ((uVar8 & 1) != 0) {
        FUN_0043dd50(uVar8 & 0xfffffffffffffffe);
      }
      goto joined_r0x0045ac4c;
    }
LAB_0045ab5c:
    uVar4 = FUN_004274f0(local_60);
    if ((uVar4 >> 0xb & 1) == 0) {
      if (*(char *)((long)param_1 + 0xc) != '\0') {
LAB_0045abd0:
        if (3 < DAT_04c70110) {
          FUN_00444bc0(auStack_a8,&DAT_04c700c0,4);
          local_b8 = FUN_004273b0(local_60);
          lVar6 = FUN_004446b0(auStack_a8,"Skipping instance of {} (callback returned failure)",
                               &DAT_048616a0,local_b8);
          uVar10 = 0x27f;
LAB_0045ac28:
          *(char **)(lVar6 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x30) = uVar10;
          FUN_00444c00(auStack_a8);
        }
        goto LAB_0045ac34;
      }
      if (DAT_04c70110 < 2) goto LAB_0045b098;
      FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
      local_b8 = FUN_004273b0(local_60);
      lVar6 = FUN_004446b0(auStack_a8,
                           "Cannot allocate/construct instance of type \'{}\' (unregistered type?)",
                           &DAT_048616a0,local_b8);
      uVar10 = 0x27c;
      goto LAB_0045b08c;
    }
    if (*(char *)((long)param_1 + 0xc) != '\0') goto LAB_0045abd0;
    if (1 < DAT_04c70110) {
      FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
      local_b8 = FUN_004273b0(local_60);
      lVar6 = FUN_004446b0(auStack_a8,
                           "Cannot allocate/construct instance of foreign type \'{}\'. This is likely due to the type being defined in a missing (not loaded) DLL or WinMD file. Check that DLLs and WinMD files are present on disk and correctly loaded."
                           ,&DAT_048616a0,local_b8);
      uVar10 = 0x278;
      goto LAB_0045b08c;
    }
  }
  else {
joined_r0x0045ac4c:
    if (uVar12 == 0) {
      if (local_68 == 0) {
LAB_0045acf8:
        if (local_68 == *param_3) goto LAB_0045aaa0;
      }
      else {
        plVar1 = param_1 + 2;
        uVar4 = FUN_0045b290(plVar1,&local_68);
        if (*(uint *)(param_1 + 3) == uVar4) {
          if ((*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) == uVar4) {
            FUN_00426990(PTR_DAT_048607b8,plVar1,0x30);
            uVar4 = *(uint *)(param_1 + 3);
          }
          lVar6 = *plVar1;
          puVar9 = (ulong *)(lVar6 + (long)(int)uVar4 * 0x30);
          *puVar9 = local_68;
          puVar9[1] = local_60;
          puVar9[2] = local_58;
          if ((local_58 & 1) != 0) {
            FUN_0043dd30(local_58 & 0xfffffffffffffffe);
          }
          lVar6 = lVar6 + (long)(int)uVar4 * 0x30;
          uVar12 = param_2[1];
          *(ulong *)(lVar6 + 0x18) = *param_2;
          *(ulong *)(lVar6 + 0x20) = uVar12;
          uVar12 = param_2[2];
          *(ulong *)(lVar6 + 0x28) = uVar12;
          if ((uVar12 & 1) != 0) {
            FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
          }
          *(uint *)(param_1 + 3) = uVar4 + 1;
          goto LAB_0045acf8;
        }
        lVar6 = *plVar1 + (long)(int)uVar4 * 0x30;
        uVar12 = param_2[1];
        *(ulong *)(lVar6 + 0x18) = *param_2;
        *(ulong *)(lVar6 + 0x20) = uVar12;
        if ((param_2[2] & 1) != 0) {
          FUN_0043dd30(param_2[2] & 0xfffffffffffffffe);
        }
        uVar12 = *(ulong *)(lVar6 + 0x28);
        if ((uVar12 & 1) != 0) {
          FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
        }
        *(ulong *)(lVar6 + 0x28) = param_2[2];
        if (local_68 == *param_3) goto LAB_0045aaa0;
      }
      plVar1 = param_1 + 2;
      uVar4 = FUN_0045b290(plVar1,param_3);
      if (*(uint *)(param_1 + 3) == uVar4) {
        if ((*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) == uVar4) {
          FUN_00426990(PTR_DAT_048607b8,plVar1,0x30);
          uVar4 = *(uint *)(param_1 + 3);
        }
        lVar6 = *plVar1;
        puVar9 = (ulong *)(lVar6 + (long)(int)uVar4 * 0x30);
        uVar12 = param_3[1];
        *puVar9 = *param_3;
        puVar9[1] = uVar12;
        uVar12 = param_3[2];
        puVar9[2] = uVar12;
        if ((uVar12 & 1) != 0) {
          FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
        }
        lVar6 = lVar6 + (long)(int)uVar4 * 0x30;
        uVar12 = param_2[1];
        *(ulong *)(lVar6 + 0x18) = *param_2;
        *(ulong *)(lVar6 + 0x20) = uVar12;
        uVar12 = param_2[2];
        *(ulong *)(lVar6 + 0x28) = uVar12;
        if ((uVar12 & 1) != 0) {
          FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
        }
        *(uint *)(param_1 + 3) = uVar4 + 1;
      }
      else {
        lVar6 = *plVar1 + (long)(int)uVar4 * 0x30;
        uVar12 = param_2[1];
        *(ulong *)(lVar6 + 0x18) = *param_2;
        *(ulong *)(lVar6 + 0x20) = uVar12;
        if ((param_2[2] & 1) != 0) {
          FUN_0043dd30(param_2[2] & 0xfffffffffffffffe);
        }
        uVar12 = *(ulong *)(lVar6 + 0x28);
        if ((uVar12 & 1) != 0) {
          FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
        }
        *(ulong *)(lVar6 + 0x28) = param_2[2];
      }
    }
LAB_0045aaa0:
    if ((local_68 == 0) || (*param_2 == 0)) goto joined_r0x0045b0a8;
    if (local_60 != 0) {
      uVar12 = FUN_0044f8a0(local_60,&DAT_04c16210);
      if (((uVar12 & 1) != 0) && (local_68 != 0)) goto joined_r0x0045b0a8;
    }
    uVar12 = local_68;
    if (*param_2 == local_68) {
      if (param_2[1] == local_60) goto joined_r0x0045b0a8;
      uVar12 = FUN_00428700();
      if ((uVar12 & 1) != 0) goto joined_r0x0045b0a8;
      if (1 < DAT_04c70110) {
        FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
        lVar6 = FUN_004446b0(auStack_a8,"Cannot clone on self with a different type",&DAT_0413df78);
        uVar10 = 0x29c;
        goto LAB_0045b08c;
      }
    }
    else {
      iVar2 = FUN_00426fc0(local_60);
      uVar8 = *param_2;
      iVar3 = FUN_00426fc0(param_2[1]);
      if ((uVar12 + (long)iVar2 <= *param_2) || (uVar8 + (long)iVar3 <= local_68)) {
        if (param_4 == 1) {
          uVar4 = FUN_004274f0(param_2[1]);
          if ((uVar4 >> 3 & 1) == 0) {
            iVar2 = FUN_0044e2c0(*param_2,param_2[1],1);
            if (iVar2 < 0) {
              if (1 < DAT_04c70110) {
                FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
                if (param_2[1] == 0) {
                  pcVar7 = "<No name>";
                }
                else {
                  pcVar7 = (char *)FUN_00427270();
                }
                local_b8._0_8_ = pcVar7;
                lVar6 = FUN_004446b0(auStack_a8,"Cannot construct type {}",&DAT_048534d0,local_b8);
                uVar10 = 0x2a9;
                goto LAB_0045b08c;
              }
              goto LAB_0045b098;
            }
          }
        }
        FUN_0045b0e0(param_1,&local_68,param_2);
        goto joined_r0x0045b0a8;
      }
      if (1 < DAT_04c70110) {
        FUN_00444bc0(auStack_a8,&DAT_04c700c0,2);
        lVar6 = FUN_004446b0(auStack_a8,"Cannot clone on a buffer overlapping with source object",
                             &DAT_0413df78);
        uVar10 = 0x2a4;
LAB_0045b08c:
        *(char **)(lVar6 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x30) = uVar10;
        FUN_00444c00(auStack_a8);
      }
    }
  }
LAB_0045b098:
  *(undefined4 *)(param_1 + 1) = 0x80040200;
joined_r0x0045b0a8:
  if ((local_58 & 1) != 0) {
    FUN_0043dd50(local_58 & 0xfffffffffffffffe);
  }
  if ((uVar11 & 1) != 0) {
    FUN_0043dd50(uVar11 & 0xfffffffffffffffe);
  }
  return;
}

