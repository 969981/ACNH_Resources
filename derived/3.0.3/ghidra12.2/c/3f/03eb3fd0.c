
undefined8 *
FUN_03eb3fd0(ulong param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
            undefined4 param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint local_d8;
  undefined4 uStack_d4;
  long local_d0;
  long *plStack_c8;
  JpegDecoder aJStack_c0 [80];
  undefined *local_70;
  long lStack_68;
  
  if (param_3 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar9 + 8);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0xa8);
    }
    param_3 = *plVar8;
  }
  if (param_4 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_4 = (long *)(lVar9 + 8);
    if (lVar10 != 0) {
      param_4 = (long *)(lVar10 + 0xa8);
    }
    param_4 = (long *)*param_4;
  }
  local_70 = &DAT_04ba4c48;
  lStack_68 = param_3;
  nn::image::JpegDecoder::JpegDecoder(aJStack_c0,(MemoryResource *)&local_70);
  nn::image::JpegDecoder::SetImageData(aJStack_c0,param_1);
  iVar4 = nn::image::JpegDecoder::Analyze();
  if (iVar4 == 0) {
    uVar6 = nn::image::JpegDecoder::GetAnalyzedDimension();
    uVar5 = FUN_0390c400(1,param_6,uVar6 & 0xffffffff,uVar6 >> 0x20,1,1,2);
    uVar13 = (ulong)uVar5;
    uVar7 = (**(code **)(*param_4 + 0x78))(param_4);
    if (uVar13 < uVar7) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        plVar8 = malloc(0x38);
      }
      else {
        plVar8 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x38,8);
      }
      puVar2 = PTR_DAT_04bb2cc8;
      plVar8[6] = 0;
      *(undefined2 *)((long)plVar8 + 0x2a) = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      *(undefined1 *)(plVar8 + 5) = 0;
      *plVar8 = (long)(puVar2 + 0x10);
      if (uVar5 == 0) {
        uVar16 = 0;
        *(undefined2 *)((long)plVar8 + 0x2a) = 8;
        lVar10 = 0;
LAB_03eb41f0:
        uVar14 = 0;
        lVar9 = 0;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar8,param_4,uVar13,0x2000,8);
        *(undefined2 *)((long)plVar8 + 0x2a) = 8;
        lVar10 = plVar8[3];
        if (plVar8[4] == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = (int)plVar8[1] - *(int *)(plVar8[4] + 0x10);
        }
        if (lVar10 == 0) goto LAB_03eb41f0;
        uVar14 = *(undefined4 *)(lVar10 + 0x104);
        lVar9 = (**(code **)PTR_DAT_04bb2cd8)(lVar10);
      }
      iVar4 = nn::image::JpegDecoder::Decode(aJStack_c0,lVar9 + (ulong)uVar16,uVar5);
      if (iVar4 == 0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          puVar15 = malloc(0xa0);
        }
        else {
          puVar15 = (undefined8 *)(**(code **)(*param_4 + 0x30))(param_4,0xa0,8);
        }
        *(undefined4 *)(puVar15 + 10) = 0xffffffff;
        puVar15[0x11] = 0;
        puVar15[0x12] = "agl::TextureData";
        *(undefined4 *)(puVar15 + 0x13) = 0x10000;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[6] = 0;
        puVar15[7] = 0;
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[0xb] = 0;
        puVar15[0xc] = 0;
        puVar15[0xd] = 0;
        puVar15[0xe] = 0;
        puVar15[0xf] = 0;
        puVar15[0x10] = 0;
        local_d8 = uVar16;
        uStack_d4 = uVar14;
        local_d0 = lVar10;
        plStack_c8 = plVar8;
        FUN_0390c314(puVar15,&local_d8,uVar13,param_6,uVar6 & 0xffffffff,uVar6 >> 0x20,param_5);
        puVar2 = PTR_DAT_04bb2698;
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          plVar8 = malloc(0x28);
        }
        else {
          plVar8 = (long *)(**(code **)(*param_4 + 0x30))(param_4,0x28,8);
        }
        puVar3 = PTR_DAT_04bd0d40;
        plVar8[2] = 0;
        plVar8[3] = 0;
        *plVar8 = (long)(puVar3 + 0x10);
        plVar8[1] = 0;
        if (*(long *)puVar2 != 0) {
          lVar10 = FUN_038cb610(*(long *)puVar2,plVar8);
          plVar8[1] = lVar10;
          if (lVar10 != 0) {
            if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = lVar10 + 0x90;
              nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
            }
            plVar12 = (long *)(lVar10 + 0x70);
            lVar11 = *plVar12;
            plVar1 = (long *)((long)*(int *)(lVar10 + 0x84) + (long)plVar8);
            *plVar12 = (long)plVar1;
            *plVar1 = lVar11;
            plVar1[1] = (long)plVar12;
            if (lVar11 != 0) {
              *(long **)(lVar11 + 8) = plVar1;
            }
            *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
            if (lVar9 != 0) {
              nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
            }
          }
        }
        plVar8[4] = (long)puVar15;
        *plVar8 = (long)&PTR_LAB_04ba4c80;
      }
      else {
        (**(code **)(*plVar8 + 8))(plVar8);
        puVar15 = (undefined8 *)0x0;
      }
      goto LAB_03eb40c0;
    }
  }
  puVar15 = (undefined8 *)0x0;
LAB_03eb40c0:
  nn::image::JpegDecoder::~JpegDecoder(aJStack_c0);
  return puVar15;
}

