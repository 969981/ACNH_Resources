
undefined8 FUN_0187e6d0(float param_1,float param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int local_64;
  int local_28;
  int local_24;
  
  param_2 = param_2 - param_1;
  fVar8 = param_1 * param_1;
  iVar6 = -0x46;
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4a4));
  iVar1 = (int)(long)(fVar4 * 10.0 * 11930465.0) + *(int *)(param_3 + 800) + -0x80000000;
  do {
    iVar6 = iVar6 + 10;
    local_64 = iVar1 + (int)(long)((float)iVar6 * 11930465.0);
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar3 = puVar5[3];
    uVar2 = *puVar5 ^ *puVar5 << 0xb;
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar5[2] = uVar3;
    puVar5[3] = uVar2;
    FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9)) |
                                         0x3f800000) + -1.0) + param_1,0),param_3,&local_64);
    fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
    fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
    if (fVar8 <= fVar7 * fVar7 + fVar4 * fVar4) goto LAB_0187ef8c;
  } while (iVar6 < 0x33);
  local_28 = iVar1 + 0x2aaaaaa0;
  puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar3 = puVar5[3];
  uVar2 = *puVar5 ^ *puVar5 << 0xb;
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar5[2] = uVar3;
  puVar5[3] = uVar2;
  FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9)) |
                                       0x3f800000) + -1.0) + param_1,0),param_3,&local_28);
  fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
  fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
  if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
    local_28 = iVar1 + 0x31c71c70;
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar3 = puVar5[3];
    uVar2 = *puVar5 ^ *puVar5 << 0xb;
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar5[2] = uVar3;
    puVar5[3] = uVar2;
    FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9)) |
                                         0x3f800000) + -1.0) + param_1,0),param_3,&local_28);
    fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
    fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
    if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
      local_28 = iVar1 + 0x38e38e38;
      puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar3 = puVar5[3];
      uVar2 = *puVar5 ^ *puVar5 << 0xb;
      *puVar5 = puVar5[1];
      puVar5[1] = puVar5[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar5[2] = uVar3;
      puVar5[3] = uVar2;
      FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9)) |
                                           0x3f800000) + -1.0) + param_1,0),param_3,&local_28);
      fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
      fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
      if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
        local_28 = iVar1 + 0x40000000;
        puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar3 = puVar5[3];
        uVar2 = *puVar5 ^ *puVar5 << 0xb;
        *puVar5 = puVar5[1];
        puVar5[1] = puVar5[2];
        uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
        puVar5[2] = uVar3;
        puVar5[3] = uVar2;
        FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9))
                                             | 0x3f800000) + -1.0) + param_1,0),param_3,&local_28);
        fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
        fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
        if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
          local_28 = iVar1 + 0x471c71c8;
          puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar3 = puVar5[3];
          uVar2 = *puVar5 ^ *puVar5 << 0xb;
          *puVar5 = puVar5[1];
          puVar5[1] = puVar5[2];
          uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
          puVar5[2] = uVar3;
          puVar5[3] = uVar2;
          FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),(short)(uVar2 >> 9)
                                                        ) | 0x3f800000) + -1.0) + param_1,0),param_3
                       ,&local_28);
          fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
          fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
          if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
            local_28 = iVar1 + 0x4e38e390;
            puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
            uVar3 = puVar5[3];
            uVar2 = *puVar5 ^ *puVar5 << 0xb;
            *puVar5 = puVar5[1];
            puVar5[1] = puVar5[2];
            uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
            puVar5[2] = uVar3;
            puVar5[3] = uVar2;
            FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                           (short)(uVar2 >> 9)) | 0x3f800000) + -1.0
                                         ) + param_1,0),param_3,&local_28);
            fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
            fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
            if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
              local_28 = iVar1 + 0x55555560;
              puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
              uVar3 = puVar5[3];
              uVar2 = *puVar5 ^ *puVar5 << 0xb;
              *puVar5 = puVar5[1];
              puVar5[1] = puVar5[2];
              uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
              puVar5[2] = uVar3;
              puVar5[3] = uVar2;
              FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                             (short)(uVar2 >> 9)) | 0x3f800000) +
                                           -1.0) + param_1,0),param_3,&local_28);
              fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328);
              fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330);
              if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                local_24 = iVar1 + -0x55555560;
                puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                uVar3 = puVar5[3];
                uVar2 = *puVar5 ^ *puVar5 << 0xb;
                *puVar5 = puVar5[1];
                puVar5[1] = puVar5[2];
                uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                puVar5[2] = uVar3;
                puVar5[3] = uVar2;
                FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                               (short)(uVar2 >> 9)) | 0x3f800000) +
                                             -1.0) + param_1,0),param_3,&local_24);
                fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) - *(float *)(param_3 + 0x328)
                ;
                fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) - *(float *)(param_3 + 0x330)
                ;
                if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                  local_24 = iVar1 + -0x4e38e390;
                  puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                  uVar3 = puVar5[3];
                  uVar2 = *puVar5 ^ *puVar5 << 0xb;
                  *puVar5 = puVar5[1];
                  puVar5[1] = puVar5[2];
                  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                  puVar5[2] = uVar3;
                  puVar5[3] = uVar2;
                  FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                 (short)(uVar2 >> 9)) | 0x3f800000)
                                               + -1.0) + param_1,0),param_3,&local_24);
                  fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                          *(float *)(param_3 + 0x328);
                  fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                          *(float *)(param_3 + 0x330);
                  if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                    local_24 = iVar1 + -0x471c71c8;
                    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                    uVar3 = puVar5[3];
                    uVar2 = *puVar5 ^ *puVar5 << 0xb;
                    *puVar5 = puVar5[1];
                    puVar5[1] = puVar5[2];
                    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                    puVar5[2] = uVar3;
                    puVar5[3] = uVar2;
                    FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                   (short)(uVar2 >> 9)) | 0x3f800000
                                                         ) + -1.0) + param_1,0),param_3,&local_24);
                    fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                            *(float *)(param_3 + 0x328);
                    fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                            *(float *)(param_3 + 0x330);
                    if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                      local_24 = iVar1 + -0x40000000;
                      puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                      uVar3 = puVar5[3];
                      uVar2 = *puVar5 ^ *puVar5 << 0xb;
                      *puVar5 = puVar5[1];
                      puVar5[1] = puVar5[2];
                      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                      puVar5[2] = uVar3;
                      puVar5[3] = uVar2;
                      FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                     (short)(uVar2 >> 9)) |
                                                           0x3f800000) + -1.0) + param_1,0),param_3,
                                   &local_24);
                      fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                              *(float *)(param_3 + 0x328);
                      fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                              *(float *)(param_3 + 0x330);
                      if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                        local_24 = iVar1 + -0x38e38e38;
                        puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                        uVar3 = puVar5[3];
                        uVar2 = *puVar5 ^ *puVar5 << 0xb;
                        *puVar5 = puVar5[1];
                        puVar5[1] = puVar5[2];
                        uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                        puVar5[2] = uVar3;
                        puVar5[3] = uVar2;
                        FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                       (short)(uVar2 >> 9)) |
                                                             0x3f800000) + -1.0) + param_1,0),
                                     param_3,&local_24);
                        fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                                *(float *)(param_3 + 0x328);
                        fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                                *(float *)(param_3 + 0x330);
                        if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                          local_24 = iVar1 + -0x31c71c70;
                          puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                          uVar3 = puVar5[3];
                          uVar2 = *puVar5 ^ *puVar5 << 0xb;
                          *puVar5 = puVar5[1];
                          puVar5[1] = puVar5[2];
                          uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                          puVar5[2] = uVar3;
                          puVar5[3] = uVar2;
                          FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                         (short)(uVar2 >> 9)) |
                                                               0x3f800000) + -1.0) + param_1,0),
                                       param_3,&local_24);
                          fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                                  *(float *)(param_3 + 0x328);
                          fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                                  *(float *)(param_3 + 0x330);
                          if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                            local_24 = iVar1 + -0x2aaaaaa0;
                            puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                            uVar3 = puVar5[3];
                            uVar2 = *puVar5 ^ *puVar5 << 0xb;
                            *puVar5 = puVar5[1];
                            puVar5[1] = puVar5[2];
                            uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
                            puVar5[2] = uVar3;
                            puVar5[3] = uVar2;
                            FUN_0187efb8(SUB42(param_2 * ((float)(CONCAT22((ushort)(uVar2 >> 0x19),
                                                                           (short)(uVar2 >> 9)) |
                                                                 0x3f800000) + -1.0) + param_1,0),
                                         param_3,&local_24);
                            fVar4 = *(float *)(*(long *)(param_3 + 0x300) + 0x278) -
                                    *(float *)(param_3 + 0x328);
                            fVar7 = *(float *)(*(long *)(param_3 + 0x300) + 0x280) -
                                    *(float *)(param_3 + 0x330);
                            if (fVar7 * fVar7 + fVar4 * fVar4 < fVar8) {
                              return 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0187ef8c:
  *(undefined1 *)(param_3 + 0x4a6) = 0;
  *(undefined2 *)(param_3 + 0x4a4) = 0;
  return 1;
}

