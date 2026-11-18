
void FUN_0367f904(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  size_t __size;
  float fVar13;
  undefined *local_60;
  char *pcStack_58;
  
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x13) = iVar2;
  iVar6 = nn::audio::GetSampleByteSize(2);
  uVar7 = nn::audio::GetRequiredBufferSizeForAuxLightLimiter(10000000,48000,2);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "VideogameAuxLimiter";
  plVar8 = (long *)FUN_038c6d48(0x100000,&local_60,*(undefined8 *)(param_2 + 8),8,1,0);
  param_1[0x12] = plVar8;
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar10 = malloc(0xc000);
  }
  else {
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar5 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        pvVar10 = (void *)0x0;
        goto LAB_0367f9f4;
      }
    }
    pvVar10 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0xc000,0x1000);
  }
LAB_0367f9f4:
  puVar1 = param_1 + 7;
  param_1[3] = pvVar10;
  nn::mem::StandardAllocator::Initialize(puVar1,(ulong)pvVar10);
  uVar11 = nn::mem::StandardAllocator::Allocate((ulong)puVar1);
  param_1[4] = uVar11;
  uVar11 = nn::mem::StandardAllocator::Allocate((ulong)puVar1);
  param_1[5] = uVar11;
  *(uint *)(param_1 + 6) = iVar2 * iVar6 * 4 + 0x1ffeU & 0xffffe000;
  nn::audio::InitializeAuxLightLimiter(param_1 + 0x10,param_1[4],uVar7,10000000,48000,2);
  lVar5 = DAT_05ae7600;
  uVar3 = *(uint *)(param_2 + 4);
  if (DAT_05ae7600 == 0) {
    pvVar10 = malloc((ulong)uVar3 << 1);
    *param_1 = pvVar10;
    __size = (ulong)*(uint *)(param_2 + 4) << 1;
  }
  else {
    plVar8 = (long *)param_1[0x12];
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar5 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      uVar7 = 0;
      if (plVar8 != (long *)0x0) goto LAB_0367fa9c;
    }
    else {
LAB_0367fa9c:
      uVar7 = (**(code **)(*plVar8 + 0x30))(plVar8,(ulong)uVar3 << 1,8);
    }
    lVar5 = DAT_05ae7600;
    *param_1 = uVar7;
    __size = (ulong)*(uint *)(param_2 + 4) << 1;
    if (lVar5 != 0) {
      plVar8 = (long *)param_1[0x12];
      if (plVar8 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar8 = (long *)(lVar5 + 8);
        if (lVar9 != 0) {
          plVar8 = (long *)(lVar9 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        pvVar10 = (void *)0x0;
        if (plVar8 == (long *)0x0) goto LAB_0367fb2c;
      }
      pvVar10 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,__size,8);
      goto LAB_0367fb2c;
    }
  }
  pvVar10 = malloc(__size);
LAB_0367fb2c:
  param_1[1] = pvVar10;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  cVar4 = *param_2;
  *(char *)((long)param_1 + 0x9c) = cVar4;
  if (cVar4 != '\0') {
    if ((float)(int)*(short *)(param_2 + 2) / 100.0 == 0.0) {
      uVar12 = 0;
    }
    else {
      fVar13 = expf(((float)(int)*(short *)(param_2 + 2) / 100.0) * 4.65);
      uVar12 = (undefined2)(int)(fVar13 * 0.0095616 * 128.0);
    }
    *(undefined2 *)((long)param_1 + 0x9e) = uVar12;
  }
  (**(code **)(*(long *)param_1[0x12] + 0x28))();
  return;
}

