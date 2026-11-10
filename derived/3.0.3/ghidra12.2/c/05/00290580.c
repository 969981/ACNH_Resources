
void FUN_00290580(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,uint param_7,undefined4 param_8)

{
  undefined *puVar1;
  ThreadType *pTVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  FUN_00289f24();
  puVar1 = PTR_DAT_04bcddb8;
  lVar6 = param_2[1];
  param_1[4] = (long)(PTR_DAT_04bccec0 + 0x10);
  param_1[5] = lVar6;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00290d14(param_1 + 6);
  *(uint *)(param_1 + 0x10) = param_7;
  plVar7 = param_1 + 0x11;
  *plVar7 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0028a4a0(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = param_5;
  param_1[0x18] = param_6;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_4;
  param_1[0x13] = (long)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_00290d20(param_1 + 6,param_8,param_3);
  uVar9 = (ulong)param_7;
  lVar6 = FUN_00285d60(uVar9,param_3,0x1000);
  if ((param_7 != 0) && (lVar6 != 0)) {
    uVar3 = uVar9 & 3;
    if (param_7 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)(lVar6 + uVar4) = 0;
        uVar4 = uVar4 + 4;
      } while ((uVar9 & 0xfffffffc) != uVar4);
    }
    if ((param_7 & 3) != 0) {
      puVar5 = (undefined1 *)(lVar6 + uVar4);
      do {
        uVar3 = uVar3 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  param_1[0x1b] = lVar6;
  pTVar2 = (ThreadType *)FUN_00285d10(0x1c0,param_3);
  if (pTVar2 != (ThreadType *)0x0) {
    memset(pTVar2,0,0x1c0);
  }
  param_1[0x1a] = (long)pTVar2;
  nn::os::CreateThread
            (pTVar2,(_func_void_void_ptr *)PTR_FUN_04bcddc0,param_1,(void *)param_1[0x1b],
             (long)(int)param_7,(int)param_1[0x1d]);
  pTVar2 = (ThreadType *)param_1[0x1a];
  (**(code **)(*param_2 + 0x18))(param_2);
  nn::os::SetThreadName(pTVar2,(char *)param_2[1]);
  lVar6 = *(long *)PTR_DAT_04bccf58;
  if (lVar6 == 0) {
    return;
  }
  FUN_00290438(lVar6 + 0x40);
  lVar8 = param_1[0x14];
  if (lVar8 != 0) {
    param_1[0x14] = 0;
    FUN_002860e8(plVar7);
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  param_1[0x14] = lVar6 + 0x28;
  FUN_002860d0(lVar6 + 0x28,plVar7);
  *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + 1;
  FUN_00290440(lVar6 + 0x40);
  return;
}

