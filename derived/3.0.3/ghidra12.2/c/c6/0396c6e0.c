
void FUN_0396c6e0(long param_1,int param_2,long param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,uint param_8,byte param_9)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 in_stack_ffffffffffffff28;
  undefined3 uVar16;
  undefined *local_88;
  char *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  lVar10 = param_1 + 0x88;
  lVar1 = param_1 + 0x128;
  iVar13 = (int)*(float *)(param_1 + 0x658);
  iVar14 = (int)*(float *)(param_1 + 0x65c);
  uVar16 = (undefined3)((uint)in_stack_ffffffffffffff28 >> 8);
  if (param_2 == 0) {
    uVar9 = CONCAT31(uVar16,1);
    FUN_0390a734(lVar10,1,param_4,iVar13,iVar14,1,1,0,0,uVar9);
    uVar16 = (undefined3)((uint)uVar9 >> 8);
    param_2 = 1;
    lVar6 = lVar1;
    uVar9 = param_6;
  }
  else {
    if (param_2 < 1) {
      uVar9 = CONCAT31(uVar16,1);
      FUN_0390a734(lVar10,1,param_4,iVar13,iVar14,1,1,0,0,uVar9);
      uVar16 = (undefined3)((uint)uVar9 >> 8);
      uVar7 = 1;
      iVar15 = 0;
    }
    else {
      uVar9 = CONCAT31(uVar16,1);
      FUN_0390a734(lVar10,5,param_4,iVar13,iVar14,1,1,0,param_2,uVar9);
      uVar16 = (undefined3)((uint)uVar9 >> 8);
      uVar7 = 5;
      iVar15 = param_2;
    }
    uVar9 = CONCAT31(uVar16,1);
    FUN_0390a734(lVar1,uVar7,param_6,iVar13,iVar14,1,1,0,iVar15,uVar9);
    uVar16 = (undefined3)((uint)uVar9 >> 8);
    lVar6 = param_1 + 0x4d8;
    uVar9 = param_4;
  }
  FUN_0390a734(lVar6,1,uVar9,iVar13,iVar14,1,param_2,0,0,CONCAT31(uVar16,1));
  puVar5 = PTR_DAT_04bb2020;
  if (param_3 == 0) {
    lVar10 = *(long *)PTR_DAT_04bbd510;
    if (param_5 != -1) {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "agl::RenderDisplay(color)";
      local_78 = 0;
      uVar9 = 5;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        uVar9 = 1;
      }
      local_70 = 0;
      local_68 = 0;
      uVar7 = FUN_03948e10(lVar10,0,lVar10 + 0x7c0,&local_88,param_4,uVar9,iVar13,iVar14,1,
                           *(char *)(param_1 + 0xc0),1,&local_78,0,0,0,param_9 & 1);
      *(undefined8 *)(param_1 + 0x78) = uVar7;
      *(int *)(param_1 + 0x290) = (int)local_78;
      *(int *)(param_1 + 0x294) = local_78._4_4_;
      *(long *)(param_1 + 0x298) = local_70;
      *(undefined8 *)(param_1 + 0x2a0) = local_68;
    }
    if (param_7 != -1) {
      local_80 = "agl::RenderDisplay(depth)";
      local_78 = 0;
      local_88 = puVar5 + 0x10;
      puVar11 = &local_78;
      if ((param_8 & 1) == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      uVar9 = 5;
      if (*(char *)(param_1 + 0x160) == '\0') {
        uVar9 = 1;
      }
      local_70 = 0;
      local_68 = 0;
      uVar7 = FUN_03948e10(lVar10,0,lVar10 + 0x7c0,&local_88,param_6,uVar9,iVar13,iVar14,1,
                           *(char *)(param_1 + 0x160),1,puVar11,0,0,0,param_9 & 1);
      *(undefined8 *)(param_1 + 0x80) = uVar7;
      if (((local_70 != *(long *)(param_1 + 0x378)) || ((int)local_78 != *(int *)(param_1 + 0x370)))
         || (local_78._4_4_ != *(int *)(param_1 + 0x374))) {
        *(int *)(param_1 + 0x370) = (int)local_78;
        *(int *)(param_1 + 0x374) = local_78._4_4_;
        *(long *)(param_1 + 0x378) = local_70;
        *(undefined8 *)(param_1 + 0x380) = local_68;
        puVar2 = (uint *)(param_1 + 0x360);
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = *puVar2 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    uVar3 = *(uint *)(param_1 + 0x6b0) | 4;
  }
  else {
    if (param_5 != -1) {
      *(long *)(param_1 + 0x78) = lVar10;
      *(char **)(param_1 + 0x118) = "FramebufferColor";
      puVar11 = *(undefined8 **)(param_3 + 0x78);
      uVar9 = *(undefined4 *)((long)puVar11 + 4);
      local_78 = *puVar11;
      local_70 = puVar11[1];
      local_68 = puVar11[2];
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)puVar11;
      *(undefined4 *)(param_1 + 0x8c) = uVar9;
      *(long *)(param_1 + 0x90) = local_70;
      *(undefined8 *)(param_1 + 0x98) = local_68;
      if ((*(byte *)(param_1 + 0xd6) >> 1 & 1) == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = 0x11 < *(ushort *)(param_1 + 0x120) &&
                *(ushort *)(param_1 + 0x120) - 0x59 < 0xffffffd6;
      }
      FUN_038fd3e0(param_1 + 0xd8,&local_78,param_1 + 0xb8,0,"FramebufferColor",bVar8,1);
      uVar9 = *(undefined4 *)(param_3 + 0x294);
      uVar7 = *(undefined8 *)(param_3 + 0x298);
      uVar12 = *(undefined8 *)(param_3 + 0x2a0);
      *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_3 + 0x290);
      *(undefined4 *)(param_1 + 0x294) = uVar9;
      *(undefined8 *)(param_1 + 0x298) = uVar7;
      *(undefined8 *)(param_1 + 0x2a0) = uVar12;
      if (*(long *)(param_3 + 0x4d0) == 0) {
        *(undefined8 *)(param_1 + 0x4d0) = 0;
      }
      else {
        *(long *)(param_1 + 0x4d0) = param_1 + 0x4d8;
        *(char **)(param_1 + 0x568) = "FramebufferResolve";
        puVar11 = *(undefined8 **)(param_3 + 0x4d0);
        uVar9 = *(undefined4 *)((long)puVar11 + 4);
        local_78 = *puVar11;
        local_70 = puVar11[1];
        local_68 = puVar11[2];
        *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)puVar11;
        *(undefined4 *)(param_1 + 0x4dc) = uVar9;
        *(long *)(param_1 + 0x4e0) = local_70;
        *(undefined8 *)(param_1 + 0x4e8) = local_68;
        if ((*(byte *)(param_1 + 0x526) >> 1 & 1) == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = 0x11 < *(ushort *)(param_1 + 0x570) &&
                  *(ushort *)(param_1 + 0x570) - 0x59 < 0xffffffd6;
        }
        FUN_038fd3e0(param_1 + 0x528,&local_78,param_1 + 0x508,0,"FramebufferResolve",bVar8,1);
      }
    }
    if (param_7 != -1) {
      *(long *)(param_1 + 0x80) = lVar1;
      *(char **)(param_1 + 0x1b8) = "FramebufferDepth";
      puVar11 = *(undefined8 **)(param_3 + 0x80);
      uVar9 = *(undefined4 *)((long)puVar11 + 4);
      local_78 = *puVar11;
      local_70 = puVar11[1];
      local_68 = puVar11[2];
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)puVar11;
      *(undefined4 *)(param_1 + 300) = uVar9;
      *(long *)(param_1 + 0x130) = local_70;
      *(undefined8 *)(param_1 + 0x138) = local_68;
      if ((*(byte *)(param_1 + 0x176) >> 1 & 1) == 0) {
        bVar8 = false;
      }
      else {
        bVar8 = 0x11 < *(ushort *)(param_1 + 0x1c0) &&
                *(ushort *)(param_1 + 0x1c0) - 0x59 < 0xffffffd6;
      }
      FUN_038fd3e0(param_1 + 0x178,&local_78,param_1 + 0x158,0,"FramebufferDepth",bVar8,1);
      lVar10 = *(long *)(param_3 + 0x378);
      iVar13 = *(int *)(param_3 + 0x374);
      if (((lVar10 != *(long *)(param_1 + 0x378)) ||
          (*(int *)(param_3 + 0x370) != *(int *)(param_1 + 0x370))) ||
         (iVar13 != *(int *)(param_1 + 0x374))) {
        uVar7 = *(undefined8 *)(param_3 + 0x380);
        *(int *)(param_1 + 0x370) = *(int *)(param_3 + 0x370);
        *(int *)(param_1 + 0x374) = iVar13;
        puVar2 = (uint *)(param_1 + 0x360);
        *(long *)(param_1 + 0x378) = lVar10;
        *(undefined8 *)(param_1 + 0x380) = uVar7;
        do {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = *puVar2 & 0xfffffff7 | 8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    uVar3 = *(uint *)(param_1 + 0x6b0) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x6b0) = uVar3;
  if (*(long *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar10 = *(long *)(param_1 + 0x80);
  }
  else {
    *(long *)(param_1 + 0x30) = param_1 + 0x1c8;
    FUN_01560750(param_1 + 0x1c8,*(long *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x286),
                 *(undefined2 *)(param_1 + 0x284));
    lVar10 = *(long *)(param_1 + 0x80);
  }
  if (lVar10 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    lVar10 = *(long *)(param_1 + 0x4d0);
  }
  else {
    *(long *)(param_1 + 0x70) = param_1 + 0x2a8;
    FUN_0155a100(param_1 + 0x2a8,lVar10,*(undefined1 *)(param_1 + 0x366),
                 *(undefined2 *)(param_1 + 0x364));
    lVar10 = *(long *)(param_1 + 0x4d0);
  }
  if (lVar10 != 0) {
    FUN_01560750(param_1 + 0x578,lVar10,*(undefined1 *)(param_1 + 0x636),
                 *(undefined2 *)(param_1 + 0x634));
  }
  return;
}

