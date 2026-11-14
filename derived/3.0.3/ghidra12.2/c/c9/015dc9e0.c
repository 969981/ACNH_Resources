
int FUN_015dc9e0(long param_1,long *param_2)

{
  undefined *puVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  Decoder *pDVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  MediaData aMStack_68 [8];
  
  puVar1 = PTR_DAT_04bb3350;
  lVar10 = *(long *)(param_1 + 0x960);
  if (lVar10 == 0) {
    lVar12 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar10;
  }
  movie::MediaData::MediaData(aMStack_68);
  if (*(long *)(param_1 + 8) == 0) {
    iVar3 = 0x3003;
  }
  else if (*(int *)(param_1 + 0x3b8) < 1) {
    iVar3 = 0;
  }
  else {
    uVar11 = 0;
    iVar3 = 0;
    do {
      (**(code **)(**(long **)(param_1 + 8) + 0x28))
                (*(long **)(param_1 + 8),uVar11 & 0xffffffff,aMStack_68);
      uVar6 = movie::MediaData::FindString((char *)aMStack_68,(char **)&DAT_04071e74);
      __s2 = local_70;
      if ((((uVar6 & 1) != 0) && (iVar2 = strncasecmp("video/",local_70,6), iVar2 == 0)) &&
         (*(long *)(param_1 + 0x10) == 0)) {
        iVar3 = strncasecmp("video/avc",__s2,9);
        if (iVar3 == 0) {
          uVar9 = 1;
        }
        else {
          iVar3 = strncasecmp("video/x-vnd.on2.vp8",__s2,0x13);
          if (iVar3 == 0) {
            uVar9 = 2;
          }
          else {
            iVar3 = strncasecmp("video/x-vnd.on2.vp9",__s2,0x13);
            uVar9 = 3;
            if (iVar3 != 0) {
              uVar9 = 0;
            }
          }
        }
        lVar10 = DAT_05ae7600;
        if (DAT_05ae7600 == 0) {
          pDVar8 = malloc(0x10);
        }
        else {
          plVar7 = param_2;
          if (param_2 == (long *)0x0) {
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
            plVar7 = (long *)(lVar10 + 8);
            if (lVar5 != 0) {
              plVar7 = (long *)(lVar5 + 0xa8);
            }
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              pDVar8 = (Decoder *)0x0;
              goto LAB_015dcc1c;
            }
          }
          pDVar8 = (Decoder *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
        }
LAB_015dcc1c:
        uVar4 = movie::GetThreadPriority();
        movie::Decoder::Decoder(pDVar8,uVar9,4,1,uVar4);
        *(Decoder **)(param_1 + 0x10) = pDVar8;
        iVar3 = (**(code **)(*(long *)pDVar8 + 0x18))(pDVar8,param_1 + 0x378);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                            (*(long **)(param_1 + 0x10),aMStack_68);
          if (iVar3 == 0) {
            *(ulong *)(param_1 + 0x3c8) = uVar11;
            local_78 = 0;
            movie::MediaData::FindInt32((char *)aMStack_68,(int *)"width");
            *(undefined4 *)(param_1 + 0x3bc) = local_78._4_4_;
            movie::MediaData::FindInt32((char *)aMStack_68,(int *)"height");
            local_80 = 0;
            *(undefined4 *)(param_1 + 0x3c0) = (undefined4)local_78;
            (**(code **)(**(long **)(param_1 + 0x10) + 0x70))
                      (*(long **)(param_1 + 0x10),(long)&local_80 + 4,&local_80);
            iVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x30))
                              (*(long **)(param_1 + 8),uVar11 & 0xffffffff);
            *(undefined1 *)(param_1 + 0x96b) = 1;
          }
          else {
            if (*(long **)(param_1 + 0x10) != (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x10) + 8))();
            }
            *(undefined8 *)(param_1 + 0x10) = 0;
          }
        }
      }
      movie::MediaData::Clear();
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_1 + 0x3b8));
  }
  lVar10 = *(long *)(param_1 + 0x10);
  movie::MediaData::~MediaData(aMStack_68);
  if (lVar12 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar12;
  }
  iVar2 = 0x1000;
  if (lVar10 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}

