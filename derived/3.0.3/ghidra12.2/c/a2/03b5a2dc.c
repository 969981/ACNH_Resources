
bool FUN_03b5a2dc(long param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
    if (iVar1 == DAT_04c4bdc4) {
      iVar1 = nn::audio::AddReverb
                        ((AudioRendererConfig *)(*(long *)PTR_DAT_04bd1e70 + 0x98),
                         (ReverbType *)(param_1 + 0x20),*(void **)(param_1 + 0x58),
                         *(ulong *)(param_1 + 0x60),(FinalMixType *)(param_2 + 0x1a),
                         *(int *)(param_1 + 0x68));
      goto LAB_03b5a3c0;
    }
  }
  else if ((iVar1 == 2) && (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 == DAT_04c4bdc8))
  {
    iVar1 = nn::audio::AddReverb
                      ((AudioRendererConfig *)(*(long *)PTR_DAT_04bd1e70 + 0x98),
                       (ReverbType *)(param_1 + 0x20),*(void **)(param_1 + 0x58),
                       *(ulong *)(param_1 + 0x60),(SubMixType *)(param_2 + 0x1a),
                       *(int *)(param_1 + 0x68));
LAB_03b5a3c0:
    return iVar1 == 0;
  }
  return false;
}

