
void FUN_03bdd340(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,uint param_5,
                 long *param_6)

{
  size_t __size;
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_50;
  char *pcStack_48;
  
  uVar8 = (ulong)param_5;
  FUN_03beb5d0(param_1,param_3,param_4,param_5);
  *(undefined8 *)(param_1 + 0x990) = param_2;
  lVar7 = DAT_05ae7600;
  if (param_6 == (long *)0x0) {
    if (DAT_05ae7600 == 0) {
      param_6 = malloc(0x18);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar7 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
      }
      param_6 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x18,8);
    }
    puVar2 = PTR_DAT_04bd23b0;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = (long)(puVar2 + 0x10);
    *(undefined1 *)(param_1 + 0x989) = 1;
  }
  lVar7 = DAT_05ae7600;
  __size = uVar8 * 0xe8 + 8;
  DAT_05aec218 = param_6;
  if (DAT_05ae7600 == 0) {
    puVar5 = malloc(__size);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
    }
    puVar5 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
  }
  *puVar5 = uVar8;
  if (param_5 != 0) {
    lVar7 = 0;
    do {
      lVar3 = lVar7 + 0xe8;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x10) = 0;
      lVar1 = (long)puVar5 + lVar7 + 0x68;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x28) = 0;
      *(long *)((long)puVar5 + lVar7 + 0x68) = lVar1;
      *(long *)((long)puVar5 + lVar7 + 0x70) = lVar1;
      lVar1 = (long)puVar5 + lVar7 + 0x80;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x40) = 0xffffffff;
      *(undefined1 *)((long)puVar5 + lVar7 + 0x58) = 1;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x60) = 0;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x94) = 8;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x98) = 0x3f800000;
      *(undefined1 *)((long)puVar5 + lVar7 + 0x9c) = 0xff;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x78) = 0;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x7c) = 8;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x90) = 0;
      *(undefined ***)((long)puVar5 + lVar7 + 8) = &PTR_LAB_04b7b878;
      *(undefined4 *)((long)puVar5 + lVar7 + 0xa0) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xa4) = 0xbf8000003f800000;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xac) = 0x3f800000;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xb4) = 0x3f80000000000000;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xbc) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xc4) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xcc) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xd4) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xdc) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0xe2) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x18) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x20) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x30) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x38) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x48) = 0;
      *(undefined8 *)((long)puVar5 + lVar7 + 0x50) = 0;
      *(long *)((long)puVar5 + lVar7 + 0x80) = lVar1;
      *(long *)((long)puVar5 + lVar7 + 0x88) = lVar1;
      lVar7 = lVar3;
    } while ((ulong)param_5 * 0xe8 != lVar3);
  }
  puVar2 = PTR_DAT_04bb2020;
  lVar7 = *(long *)PTR_DAT_04bd23b8;
  *(ulong **)(param_1 + 0x9a8) = puVar5 + 1;
  pcStack_48 = "xlinkContainer";
  local_50 = puVar2 + 0x10;
  uVar6 = FUN_038cca9c(uVar8 * lVar7 * 2 + 0x100,&local_50,lVar7,4,param_3,1);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  pcStack_48 = "xlinkAssetExecutor";
  local_50 = puVar2 + 0x10;
  uVar6 = FUN_038cca9c(uVar8 * 0xa8 + 0x100,&local_50,0xa8,4,param_3,1);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  return;
}

