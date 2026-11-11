
undefined4 FUN_0046e8d0(long *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *local_80;
  undefined1 auStack_78 [64];
  undefined4 local_38 [2];
  
  local_38[0] = 0;
  uVar1 = (uint)*param_2;
  if ((*param_2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::SUBTYPE.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b2;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::FUNCTIONS.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b3;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::INTERFACES.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b4;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::INHERITANCE.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b5;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::DEF_CONSTRUCTOR.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b6;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::DESTRUCTOR.",
                             &DAT_04864918,param_2);
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = 0x1b7;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
      if (*pcVar5 != '\0') {
        return local_38[0];
      }
      uVar1 = (uint)*param_2;
    }
    if ((uVar1 >> 0x17 & 1) == 0) {
      return local_38[0];
    }
    FUN_0046e670(local_38);
    lVar2 = *(long *)(*param_1 + 0x28);
    if (lVar2 == 0) {
      return local_38[0];
    }
    if (*(byte *)(lVar2 + 0x50) < *(byte *)(*param_1 + 0x30)) {
      return local_38[0];
    }
    FUN_00444bc0(auStack_78);
    lVar2 = FUN_004446b0(auStack_78,"Decorator type \'{}\' has local Opt::DECLS.",&DAT_04864918,
                         param_2);
    uVar6 = 0x1b8;
    goto LAB_0046ec08;
  }
  uVar1 = FUN_00428440(param_2);
  uVar1 = uVar1 & 0x1f;
  if (8 < uVar1) {
    FUN_0046e670(local_38);
    return local_38[0];
  }
  lVar2 = FUN_00428370(param_2);
  if ((lVar2 == 0) && (1 < uVar1)) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      lVar2 = FUN_004446b0(auStack_78,"Invalid Impl for type \'{}\'.",&DAT_04864918,param_2);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x1e3;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
  uVar7 = *param_2;
  if ((uVar7 & 0x8008) == 0x8000) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      lVar2 = FUN_004446b0(auStack_78,"Type \'{}\' has local Opt::TEMPLATE but no local Opt::NAME.",
                           &DAT_04864918,param_2);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x1e7;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
  if (((uint)uVar7 >> 3 & 1) != 0) {
    if (((((byte)*param_2 >> 3 & 1) == 0) ||
        (puVar3 = (undefined8 *)FUN_00426db0(param_2,8), puVar3 == (undefined8 *)0x0)) ||
       ((char *)*puVar3 == (char *)0x0)) {
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        local_80 = param_2;
        lVar2 = FUN_004446b0(auStack_78,"Type {} has a null Opt::NAME",&DAT_04864978,&local_80);
        uVar6 = 0x1ec;
LAB_0046ee2c:
        *(char **)(lVar2 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        *(undefined8 *)(lVar2 + 0x30) = uVar6;
        FUN_00444c00(auStack_78);
        pcVar5 = (char *)*param_1;
      }
    }
    else {
      if (*(char *)*puVar3 != '\0') goto LAB_0046ee44;
      FUN_0046e670(local_38);
      pcVar5 = (char *)*param_1;
      if ((*(long *)(pcVar5 + 0x28) != 0) &&
         ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
        FUN_00444bc0(auStack_78);
        local_80 = param_2;
        lVar2 = FUN_004446b0(auStack_78,"Type {} has an empty Opt::NAME",&DAT_04864978,&local_80);
        uVar6 = 0x1ef;
        goto LAB_0046ee2c;
      }
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
LAB_0046ee44:
  uVar7 = *param_2;
  if ((uVar7 & 1) == 0) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      local_80 = (ulong *)0x409a235;
      lVar2 = FUN_004446b0(auStack_78,"Type \'{}\' has unexpected Opt::FORMAT ({}).",&DAT_04864988,
                           param_2,&local_80);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 499;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
    uVar7 = *param_2;
  }
  if (((uint)(uVar1 == 6 || uVar1 == 8) ^ (uint)(uVar7 >> 1) & 1) == 1) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      local_80 = (ulong *)0x40e7cb1;
      if (uVar1 == 8 || uVar1 == 6) {
        local_80 = (ulong *)0x409a235;
      }
      lVar2 = FUN_004446b0(auStack_78,"Type \'{}\' has unexpected Opt::SUBTYPE ({}).",&DAT_04864988,
                           param_2,&local_80);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 500;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
  if ((uVar1 == 7) && (-1 < (char)*(byte *)((long)param_2 + 2))) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      local_80 = (ulong *)0x409a235;
      lVar2 = FUN_004446b0(auStack_78,"Type \'{}\' has unexpected Opt::DECLS ({}).",&DAT_04864988,
                           param_2,&local_80);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x1f5;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
  uVar1 = FUN_004274f0(param_2);
  if ((uVar1 >> 1 & 1) == 0) {
    return local_38[0];
  }
  plVar4 = (long *)FUN_00426e90(param_2,0x40);
  if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
    FUN_0046e670(local_38);
    pcVar5 = (char *)*param_1;
    if ((*(long *)(pcVar5 + 0x28) != 0) &&
       ((byte)pcVar5[0x30] <= *(byte *)(*(long *)(pcVar5 + 0x28) + 0x50))) {
      FUN_00444bc0(auStack_78);
      lVar2 = FUN_004446b0(auStack_78,
                           "Type \'{}\' is abstract and should not have a default constructor.",
                           &DAT_04864918,param_2);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x1f9;
      FUN_00444c00(auStack_78);
      pcVar5 = (char *)*param_1;
    }
    if (*pcVar5 != '\0') {
      return local_38[0];
    }
  }
  plVar4 = (long *)FUN_00426e90(param_2,0x80);
  if (plVar4 == (long *)0x0) {
    return local_38[0];
  }
  if (*plVar4 == 0) {
    return local_38[0];
  }
  FUN_0046e670(local_38);
  lVar2 = *(long *)(*param_1 + 0x28);
  if (lVar2 == 0) {
    return local_38[0];
  }
  if (*(byte *)(lVar2 + 0x50) < *(byte *)(*param_1 + 0x30)) {
    return local_38[0];
  }
  FUN_00444bc0(auStack_78);
  lVar2 = FUN_004446b0(auStack_78,"Type \'{}\' is abstract and should not have a copy constructor.",
                       &DAT_04864918,param_2);
  uVar6 = 0x1fa;
LAB_0046ec08:
  *(char **)(lVar2 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  FUN_00444c00(auStack_78);
  return local_38[0];
}

