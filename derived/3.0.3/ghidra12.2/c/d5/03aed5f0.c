
void FUN_03aed5f0(long param_1,int param_2,long *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  
  *(int *)(param_1 + 0x18) = param_4;
  if (param_4 != 1) {
    return;
  }
  if (param_2 < 1) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar5 = malloc((long)(param_2 << 3));
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_03aed698;
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(long)(param_2 << 3),8);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0x10) = pvVar5;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(param_1 + 0xc) = param_2;
  }
LAB_03aed698:
  puVar1 = PTR_DAT_04bd11a0 + 0x10;
  puVar2 = PTR_DAT_04bd1178 + 0x10;
  do {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    if (lVar8 == 0) {
      puVar6 = malloc(0x238);
    }
    else {
      plVar4 = param_3;
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar8 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          puVar6 = (undefined8 *)0x0;
          goto LAB_03aed740;
        }
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x238,8);
    }
LAB_03aed740:
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x15) = 0x10000;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = "agl::TextureData";
    *(undefined4 *)(puVar6 + 0x18) = 0xff;
    *(undefined4 *)((long)puVar6 + 0xc4) = 0;
    puVar6[1] = puVar1;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    pcVar7 = *(code **)PTR_DAT_04bcf220;
    puVar6[0x19] = 0x80000000000;
    puVar6[0x1a] = 0;
    (*pcVar7)(puVar6 + 0x16);
    puVar6[0x1f] = 0;
    puVar6[0x20] = &DAT_3f8000003f800000;
    puVar6[0x29] = 0;
    puVar6[0x1d] = puVar2;
    puVar6[0x1e] = &DAT_3f8000003f800000;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    FUN_0390cee0(puVar6 + 0x2a);
    puVar6[0x46] = 0x2d000000500;
    puVar6[0x1e] = 0x4434000044a00000;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0x4434000044a00000;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar6;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

