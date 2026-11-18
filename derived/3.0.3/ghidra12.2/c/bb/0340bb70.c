
void FUN_0340bb70(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  lVar7 = param_2[2];
  *(long *)(param_1 + 0x50) = lVar7;
  *(undefined8 *)(param_1 + 0x58) = param_2[3];
  uVar2 = *(uint *)param_2[4];
  if ((int)uVar2 < 1) {
    if (uVar2 == 0) {
      plVar4 = *(long **)(lVar7 + 0x58);
      goto joined_r0x0340bc1c;
    }
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 == 0) {
      pvVar5 = malloc((ulong)uVar2 << 3);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_0340bc38;
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)uVar2 << 3,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(uint *)(param_1 + 0x78) = uVar2;
      *(void **)(param_1 + 0x80) = pvVar5;
    }
  }
LAB_0340bc38:
  uVar8 = 0;
  do {
    lVar3 = *(long *)(*(long *)(param_2[4] + 8) + (long)(int)uVar8 * 8);
    *(undefined1 *)(lVar3 + 0x310) = 1;
    lVar7 = **(long **)(lVar3 + 0x238);
    FUN_03d59634(*(undefined8 *)(param_1 + 0x70),0,4,lVar7);
    *(undefined1 *)(lVar7 + 0xbd) = 0;
    FUN_03d49da4(*(undefined8 *)(lVar3 + 0x218),0,4);
    FUN_03d49da4(*(undefined8 *)(lVar3 + 0x218),1,4);
    FUN_03d49da4(*(undefined8 *)(lVar3 + 0x218),2,4);
    FUN_03d49da4(*(undefined8 *)(lVar3 + 0x218),3,4);
    uVar1 = uVar8;
    if (*(uint *)(param_1 + 0x78) <= uVar8) {
      uVar1 = 0;
    }
    uVar8 = uVar8 + 1;
    *(long *)(*(long *)(param_1 + 0x80) + (long)(int)uVar1 * 8) = lVar3;
  } while (uVar2 != uVar8);
  plVar4 = *(long **)(*(long *)(param_1 + 0x50) + 0x58);
joined_r0x0340bc1c:
  if ((plVar4 == (long *)0x0) || (uVar6 = (**(code **)(*plVar4 + 0x38))(), (uVar6 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x58) + 0x58);
  if ((plVar4 == (long *)0x0) || (uVar6 = (**(code **)(*plVar4 + 0x38))(), (uVar6 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(long *)(*(long *)(param_1 + 0x50) + 0x3b0) = param_1 + 0x90;
  *(long *)(*(long *)(param_1 + 0x58) + 0x3b0) = param_1 + 0x90;
  return;
}

