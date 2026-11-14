
undefined8 FUN_01c77ddc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  void *__ptr;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  undefined4 local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  long local_d8;
  long *plStack_d0;
  JpegDecoder aJStack_c8 [80];
  undefined *local_78;
  long *plStack_70;
  undefined4 local_68;
  
  if (*(char *)(param_1 + 0x278) == '\0') {
    *(undefined8 *)(param_1 + 0x240) = 0;
    puVar1 = PTR_DAT_04bdf1d8;
    lVar12 = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined **)(param_1 + 0x228) = &DAT_04a43318;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined **)(param_1 + 600) = puVar1 + 0x10;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x248);
  }
  uVar8 = *(ulong *)(lVar12 + 8);
  if (*(char *)(lVar12 + 0x18) == '\0') {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    if (*(char *)(param_1 + 0x278) != '\0') goto LAB_01c77e60;
LAB_01c77e78:
    *(undefined8 *)(param_1 + 0x240) = 0;
    puVar1 = PTR_DAT_04bdf1d8;
    plVar7 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined **)(param_1 + 0x228) = &DAT_04a43318;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined **)(param_1 + 600) = puVar1 + 0x10;
  }
  else {
    if (*(char *)(param_1 + 0x278) == '\0') goto LAB_01c77e78;
LAB_01c77e60:
    plVar7 = *(long **)(param_1 + 0x250);
  }
  local_78 = &DAT_04a432e0;
  local_68 = 0xffffffff;
  plStack_70 = plVar7;
  nn::image::JpegDecoder::JpegDecoder(aJStack_c8,(MemoryResource *)&local_78);
  nn::image::JpegDecoder::SetImageData(aJStack_c8,uVar8);
  iVar2 = nn::image::JpegDecoder::Analyze();
  if (iVar2 == 0) {
    uVar8 = nn::image::JpegDecoder::GetAnalyzedDimension();
    uVar3 = FUN_0390c400(1,0x1d,uVar8 & 0xffffffff,uVar8 >> 0x20,1,1,2);
    uVar9 = (ulong)uVar3;
    uVar4 = (**(code **)(*plVar7 + 0x80))(plVar7,8);
    if (uVar9 <= uVar4) {
      if (DAT_05ae7600 == 0) {
        plVar5 = malloc(0x38);
      }
      else {
        plVar5 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
      }
      puVar1 = PTR_DAT_04bb2cc8;
      plVar5[6] = 0;
      *(undefined2 *)((long)plVar5 + 0x2a) = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      *(undefined1 *)(plVar5 + 5) = 0;
      *plVar5 = (long)(puVar1 + 0x10);
      if (uVar3 == 0) {
        uVar13 = 0;
        local_e4 = 0;
        lVar10 = 0;
        lVar6 = 0;
        *(undefined2 *)((long)plVar5 + 0x2a) = 8;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar5,plVar7,uVar9,0x2000,8);
        *(undefined2 *)((long)plVar5 + 0x2a) = 8;
        lVar10 = plVar5[3];
        if (plVar5[4] == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = (int)plVar5[1] - *(int *)(plVar5[4] + 0x10);
        }
        if (lVar10 == 0) {
          local_e4 = 0;
          lVar6 = 0;
        }
        else {
          local_e4 = *(undefined4 *)(lVar10 + 0x104);
          lVar6 = (*DAT_04c61fd0)(lVar10);
        }
      }
      iVar2 = nn::image::JpegDecoder::Decode(aJStack_c8,lVar6 + (ulong)uVar13,uVar3);
      if (iVar2 == 0) {
        if (DAT_05ae7600 == 0) {
          puVar11 = malloc(0xa0);
        }
        else {
          puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa0,0xfffffff8);
        }
        puVar11[0x11] = 0;
        puVar11[0x12] = "agl::TextureData";
        *(undefined4 *)(puVar11 + 10) = 0xffffffff;
        *(undefined4 *)(puVar11 + 0x13) = 0x10000;
        puVar11[8] = 0;
        puVar11[9] = 0;
        uStack_dc = local_e4;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        puVar11[0x10] = 0;
        local_e0 = uVar13;
        local_d8 = lVar10;
        plStack_d0 = plVar5;
        FUN_0390c314(puVar11,&local_e0,uVar9,0x1d,uVar8 & 0xffffffff,uVar8 >> 0x20,plVar7);
      }
      else {
        (**(code **)(*plVar5 + 8))(plVar5);
        puVar11 = (undefined8 *)0x0;
      }
      goto LAB_01c77f48;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_01c77f48:
  nn::image::JpegDecoder::~JpegDecoder(aJStack_c8);
  __ptr = *(void **)(lVar12 + 0x150);
  *(undefined8 **)(lVar12 + 0x150) = puVar11;
  if (__ptr != (void *)0x0) {
    if ((*(long *)((long)__ptr + 8) != 0) && (*(long **)((long)__ptr + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)__ptr + 0x10) + 8))();
    }
    FUN_038fd0e0((long)__ptr + 0x50);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar7 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
      }
    }
    puVar11 = *(undefined8 **)(lVar12 + 0x150);
  }
  if (*(char *)(lVar12 + 0x161) == '\0') {
    *(undefined1 *)(lVar12 + 0x161) = 1;
  }
  *(bool *)(lVar12 + 0x160) = puVar11 != (undefined8 *)0x0;
  return 1;
}

