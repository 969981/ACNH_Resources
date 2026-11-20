
ulong FUN_03eb43c0(ulong param_1,ExifBuilder *param_2,long param_3,long *param_4,int param_5,
                  ulong param_6,int param_7,int *param_8,int param_9)

{
  undefined4 uVar1;
  ushort uVar2;
  float __y;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  ulong local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  undefined *local_1a8;
  long *plStack_1a0;
  uint local_198;
  undefined4 uStack_194;
  long local_190;
  long *plStack_188;
  int local_17c;
  ulong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar3 = PTR_DAT_04bb2698;
  local_17c = param_9;
  if (param_1 != 0) {
    if (param_4 == (long *)0x0) {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar11 + 8);
      if (lVar5 != 0) {
        puVar12 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_4 = (long *)*puVar12;
    }
    uVar2 = *(ushort *)(param_3 + 0x32);
    lVar5 = *(long *)puVar3;
    uVar8 = (uint)*(ushort *)(param_3 + 0x30);
    if (*(ushort *)(param_3 + 0x30) < 2) {
      uVar8 = 1;
    }
    uVar9 = (uint)uVar2;
    if (*(short *)(param_3 + 0x3a) != 3) {
      uVar9 = 1;
    }
    if (uVar9 == uVar2 || uVar9 < uVar2) {
      uVar9 = (uint)uVar2;
    }
    uVar8 = uVar8 * uVar9 * 4;
    if (lVar5 == 0) {
      plVar6 = malloc(0x38);
    }
    else {
      plVar6 = param_4;
      if (param_4 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar5 + 8);
        if (lVar11 != 0) {
          plVar6 = (long *)(lVar11 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_03eb44dc;
        }
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x38,8);
    }
LAB_03eb44dc:
    puVar3 = PTR_DAT_04bb2cc8;
    plVar6[1] = 0;
    plVar6[6] = 0;
    *(undefined2 *)((long)plVar6 + 0x2a) = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *(undefined1 *)(plVar6 + 5) = 0;
    *plVar6 = (long)(puVar3 + 0x10);
    if ((uVar8 != 0) &&
       (uVar7 = FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar6,param_4,(ulong)uVar8,0x800,8),
       (uVar7 & 1) != 0)) {
      lVar5 = plVar6[3];
      *(undefined2 *)((long)plVar6 + 0x2a) = 8;
      uVar9 = 0;
      if (plVar6[4] != 0) {
        uVar9 = (int)plVar6[1] - *(int *)(plVar6[4] + 0x10);
      }
      if (lVar5 != 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x104);
        lVar11 = (**(code **)PTR_DAT_04bb2cd8)(lVar5);
        if (lVar11 != 0) {
          local_198 = uVar9;
          uStack_194 = uVar1;
          local_190 = lVar5;
          plStack_188 = plVar6;
          FUN_038fb0a0(*(undefined8 *)PTR_DAT_04bc1010,&local_198,param_3);
          if (local_17c == 0) {
            puVar12 = (undefined8 *)PTR_DAT_04bb2cd8;
          }
          else {
            lVar11 = 0;
            local_88 = 0;
            uStack_80 = 0;
            __y = 0.45454544;
            if (local_17c != 1) {
              __y = 2.2;
            }
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_118 = 0;
            uStack_110 = 0;
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_178 = 0;
            uStack_170 = 0;
            do {
              fVar13 = powf((float)(int)lVar11 / 255.0,__y);
              *(char *)((long)&local_178 + lVar11) = (char)(int)(fVar13 * 255.0);
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0x100);
            lVar11 = (*DAT_04c61fd0)(lVar5);
            if (uVar8 != 0) {
              uVar7 = 0;
              do {
                bVar10 = *(byte *)(lVar11 + (ulong)uVar9 + uVar7);
                if ((~(uint)uVar7 & 3) != 0) {
                  bVar10 = *(byte *)((long)&local_178 + (ulong)bVar10);
                }
                *(byte *)(lVar11 + (ulong)uVar9 + uVar7) = bVar10;
                uVar7 = uVar7 + 1;
              } while (uVar8 != uVar7);
            }
            puVar12 = &DAT_04c61fd0;
          }
          local_1a8 = &DAT_04ba4c48;
          plStack_1a0 = param_4;
          nn::image::JpegEncoder::JpegEncoder
                    ((JpegEncoder *)&local_178,(MemoryResource *)&local_1a8);
          uVar2 = *(ushort *)(param_3 + 0x32);
          local_1b0 = (uint)*(ushort *)(param_3 + 0x30);
          if (*(ushort *)(param_3 + 0x30) < 2) {
            local_1b0 = 1;
          }
          uStack_1ac = (uint)uVar2;
          if (*(short *)(param_3 + 0x3a) != 3) {
            uStack_1ac = 1;
          }
          if (uStack_1ac == uVar2 || uStack_1ac < uVar2) {
            uStack_1ac = (uint)uVar2;
          }
          lVar5 = (*(code *)*puVar12)(lVar5);
          nn::image::JpegEncoder::SetPixelData(&local_178,lVar5 + (ulong)uVar9,0xe,&local_1b0,1);
          nn::image::JpegEncoder::SetQuality((int)&local_178);
          nn::image::JpegEncoder::Analyze();
          for (; 0 < param_5; param_5 = param_5 - param_7) {
            nn::image::JpegEncoder::SetQuality((int)&local_178);
            nn::image::JpegEncoder::Analyze();
            local_1b8 = 0;
            iVar4 = nn::image::JpegEncoder::Encode(&local_178,&local_1b8,param_1,param_2);
            if ((iVar4 == 0) && (local_1b8 < param_6)) {
              uVar7 = local_1b8;
              if (param_8 != (int *)0x0) {
                *param_8 = param_5;
              }
              goto LAB_03eb47f4;
            }
          }
          uVar7 = 0;
LAB_03eb47f4:
          (**(code **)(*plVar6 + 8))(plVar6);
          nn::image::JpegEncoder::~JpegEncoder((JpegEncoder *)&local_178);
          goto LAB_03eb46c0;
        }
        goto LAB_03eb46bc;
      }
    }
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_03eb46bc:
  uVar7 = 0;
LAB_03eb46c0:
  return uVar7 & 0xffffffff;
}

